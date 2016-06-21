#include <limits>

#include "Decoder_RSC_BCJR_seq_generic.hpp"

template <typename R>
struct RSC_BCJR_seq_generic_init
{
	static void apply(mipp::vector<mipp::vector<R>> &alpha, 
	                  mipp::vector<mipp::vector<R>> &beta, 
	                  const int &K, const int &n_states, const int &n_ff)
	{
		// init alpha values
		alpha[0][0] = (R)0;
		for (auto i = 1; i < n_states; i++)
			alpha[i][0] = -std::numeric_limits<R>::max();
		for (auto i = 0; i < n_states; i++)
			alpha[i][K +n_ff] = -std::numeric_limits<R>::max();

		// init beta values
		beta[0][K +n_ff] = (R)0;
		for (auto i = 1; i < n_states; i++)
			beta[i][K +n_ff] = -std::numeric_limits<R>::max();
		for (auto i = 0; i < n_states; i++)
			beta[i][0] = -std::numeric_limits<R>::max();
	}
};

template <>
struct RSC_BCJR_seq_generic_init <short>
{
	static void apply(mipp::vector<mipp::vector<short>> &alpha, 
	                  mipp::vector<mipp::vector<short>> &beta, 
	                  const int &K, const int &n_states, const int &n_ff)
	{
		// init alpha values
		alpha[0][0] = (short)0;
		for (auto i = 1; i < n_states; i++)
			alpha[i][0] = -(1 << (sizeof(short) * 8 -2));
		for (auto i = 0; i < n_states; i++)
			alpha[i][K +n_ff] = -(1 << (sizeof(short) * 8 -2));

		// init beta values
		beta[0][K +n_ff] = (short)0;
		for (auto i = 1; i < n_states; i++)
			beta[i][K +n_ff] = -(1 << (sizeof(short) * 8 -2));
		for (auto i = 0; i < n_states; i++)
			beta[i][0] = -(1 << (sizeof(short) * 8 -2));
	}
};

template <>
struct RSC_BCJR_seq_generic_init <signed char>
{
	static void apply(mipp::vector<mipp::vector<signed char>> &alpha, 
	                  mipp::vector<mipp::vector<signed char>> &beta, 
	                  const int &K, const int &n_states, const int &n_ff)
	{
		// init alpha values
		alpha[0][0] = (signed char)0;
		for (auto i = 1; i < n_states; i++)
			alpha[i][0] = -63;
		for (auto i = 0; i < n_states; i++)
			alpha[i][K +n_ff] = -63;

		// init beta values
		beta[0][K +n_ff] = (signed char)0;
		for (auto i = 1; i < n_states; i++)
			beta[i][K +n_ff] = -63;
		for (auto i = 0; i < n_states; i++)
			beta[i][0] = -63;
	}
};

template <typename B, typename R>
Decoder_RSC_BCJR_seq_generic<B,R>
::Decoder_RSC_BCJR_seq_generic(const int &K, const mipp::vector<mipp::vector<int>> &trellis, const bool buffered_encoding)
: Decoder_RSC_BCJR<B,R>(K, buffered_encoding), n_states(trellis[0].size()), n_ff(std::log2(n_states)),
  alpha(n_states), beta(n_states), gamma(2), 
  idx_a1(n_states), idx_a2(n_states), idx_b1(n_states), idx_b2(n_states), 
  idx_g1(n_states), idx_g2(n_states)
{
	assert(is_power_of_2(n_states));

	for (auto i = 0; i < n_states; i++) alpha[i].resize(K +n_ff +1);
	for (auto i = 0; i < n_states; i++) beta [i].resize(K +n_ff +1);
	for (auto i = 0; i < 2;        i++) gamma[i].resize(K +n_ff +0);

	RSC_BCJR_seq_generic_init<R>::apply(alpha, beta, K, n_states, n_ff);

	for (auto i = 0; i < n_states; i++)
		idx_a1[trellis[0][i]] = i;
	for (auto i = 0; i < n_states; i++)
		idx_a2[trellis[1][i]] = i;

	idx_b1 = trellis[0];
	idx_b2 = trellis[1];

	idx_g1 = trellis[2];
	idx_g2 = trellis[3];
}

template <typename B, typename R>
Decoder_RSC_BCJR_seq_generic<B,R>
::~Decoder_RSC_BCJR_seq_generic()
{
}

// =================================================================================================== sys/par division
template <typename R>
struct RSC_BCJR_seq_generic_div_or_not
{
	static R apply(R m)
	{
		return div2<R>(m);
	}
};

template <>
struct RSC_BCJR_seq_generic_div_or_not <short>
{
	static short apply(short m)
	{
		// (WW) work only for max-log-MAP !!!
		return m;
	}
};

// ====================================================================================================== post division
template <typename R, typename RD>
struct RSC_BCJR_seq_generic_post
{
	static R compute(const RD &post)
	{
		return post;
	}
};

template <typename RD>
struct RSC_BCJR_seq_generic_post <short, RD>
{
	static short compute(const RD &post)
	{
		// (WW) work only for max-log-MAP !!!
		return div2<RD>(post);
	}
};

template <typename RD>
struct RSC_BCJR_seq_generic_post <signed char, RD>
{
	static signed char compute(const RD &post)
	{
		return (signed char)saturate<RD>(post, -63, 63);
	}
};

// ====================================================================================================== normalization
template <typename R>
struct RSC_BCJR_seq_generic_normalize
{
	static void apply(mipp::vector<mipp::vector<R>> &metrics, const int &i, const int &n_states)
	{
		// no need to do something
	}

	static void apply(R *metrics, const int &i, const int &n_states)
	{
		// no need to do something
	}
};

template <>
struct RSC_BCJR_seq_generic_normalize <short>
{
	static void apply(mipp::vector<mipp::vector<short>> &metrics, const int &i, const int &n_states)
	{
		// normalization
		if (i % 8 == 0)
		{
			auto norm_val = metrics[0][i];
			for (auto j = 0; j < n_states; j++)
				metrics[j][i] -= norm_val;
		}
	}

	static void apply(short *metrics, const int &i, const int &n_states)
	{
		// normalization
		if (i % 8 == 0)
		{
			auto norm_val = metrics[0];
			for (auto j = 0; j < n_states; j++)
				metrics[j] -= norm_val;
		}
	}
};

template <>
struct RSC_BCJR_seq_generic_normalize <signed char>
{
	static void apply(mipp::vector<mipp::vector<signed char>> &metrics, const int &i, const int &n_states)
	{
		// normalization & saturation
		auto norm_val = metrics[0][i];
		for (auto j = 0; j < n_states; j++)
			metrics[j][i] = saturate<signed char>(metrics[j][i] - norm_val, -63, +63);
	}

	static void apply(signed char *metrics, const int &i, const int &n_states)
	{
		// normalization & saturation
		auto norm_val = metrics[0];
		for (auto j = 0; j < n_states; j++)
			metrics[j] = saturate<signed char>(metrics[j] - norm_val, -63, +63);
	}
};