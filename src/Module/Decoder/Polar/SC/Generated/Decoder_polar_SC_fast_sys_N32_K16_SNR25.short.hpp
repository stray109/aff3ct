#ifndef DECODER_POLAR_SC_FAST_SYS_N32_K16_SNR25_HPP_
#define DECODER_POLAR_SC_FAST_SYS_N32_K16_SNR25_HPP_

#include <cassert>

#include "../Decoder_polar_SC_fast_sys.hpp"

namespace aff3ct
{
namespace module
{
static const char Decoder_polar_SC_fast_sys_fb_32_16_25[32] = {
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

template <typename B, typename R, class API_polar>
class Decoder_polar_SC_fast_sys_N32_K16_SNR25 : public Decoder_polar_SC_fast_sys<B, R, API_polar>
{
public:
	Decoder_polar_SC_fast_sys_N32_K16_SNR25(const int& K, const int& N, const mipp::vector<B>& frozen_bits, const int n_frames = 1)
	: Decoder_polar_SC_fast_sys<B, R, API_polar>(K, N, frozen_bits, n_frames)
	{
		assert(N == 32);
		assert(K == 16);
		
		auto i = 0;
		while (i < 32 && Decoder_polar_SC_fast_sys_fb_32_16_25[i] == frozen_bits[i]) i++;
		assert(i == 32);
	}

	virtual ~Decoder_polar_SC_fast_sys_N32_K16_SNR25()
	{
	}

	// depth = 3, reverse depth = 2, size = 4, calls = 2
	__attribute__((always_inline))
	inline void re3(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template rep< 4>(s, l, off_l+ 0,               off_s+ 0,  4);
	}

	// depth = 3, reverse depth = 2, size = 4, calls = 2
	__attribute__((always_inline))
	inline void s3(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template spc< 4>(s, l, off_l+ 0,               off_s+ 0,  4);
	}

	// depth = 2, reverse depth = 3, size = 8, calls = 2
	__attribute__((always_inline))
	inline void re3s3(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template f  < 4>(   l, off_l+ 0, off_l+ 4,        off_l+ 8,  4);
		re3(off_l+8, off_s+0);
		API_polar::template gr < 4>(s, l, off_l+ 0, off_l+ 4, off_s+ 0, off_l+ 8,  4);
		s3(off_l+8, off_s+4);
		API_polar::template xo < 4>(s,    off_s+ 0, off_s+ 4,        off_s+ 0,  4);
	}

	void _hard_decode(const R *Y_N, B *V_K, const int frame_id)
	{
		using namespace tools;

		auto t_load = std::chrono::steady_clock::now();
		this->_load(Y_N);
		auto d_load = std::chrono::steady_clock::now() - t_load;

		auto t_decod = std::chrono::steady_clock::now();
		auto &l = this->l;
		auto &s = this->s;

		API_polar::template f  <16>(   l,  0+ 0,  0+16,         0+32, 16);
		API_polar::template g0 < 8>(   l, 32+ 0, 32+ 8,        32+16,  8);
		re3s3(48, 8);
		API_polar::template xo0< 8>(s,     0+ 8,                0+ 0,  8);
		API_polar::template g  <16>(s, l,  0+ 0,  0+16,  0+ 0,  0+32, 16);
		API_polar::template f  < 8>(   l, 32+ 0, 32+ 8,        32+16,  8);
		re3s3(48, 16);
		API_polar::template g  < 8>(s, l, 32+ 0, 32+ 8, 16+ 0, 32+16,  8);
		API_polar::template h  < 8>(s, l, 48+ 0,               24+ 0,  8);
		API_polar::template xo < 8>(s,    16+ 0, 16+ 8,        16+ 0,  8);
		API_polar::template xo <16>(s,     0+ 0,  0+16,         0+ 0, 16);
		auto d_decod = std::chrono::steady_clock::now() - t_decod;

		auto t_store = std::chrono::steady_clock::now();
		this->_store(V_K);
		auto d_store = std::chrono::steady_clock::now() - t_store;

		this->d_load_total  += d_load;
		this->d_decod_total += d_decod;
		this->d_store_total += d_store;
	}
};
}
}
#endif
