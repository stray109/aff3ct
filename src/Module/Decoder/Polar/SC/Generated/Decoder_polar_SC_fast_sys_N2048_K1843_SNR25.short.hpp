#ifndef DECODER_POLAR_SC_FAST_SYS_N2048_K1843_SNR25_HPP_
#define DECODER_POLAR_SC_FAST_SYS_N2048_K1843_SNR25_HPP_

#include <cassert>

#include "../Decoder_polar_SC_fast_sys.hpp"

namespace aff3ct
{
namespace module
{
static const char Decoder_polar_SC_fast_sys_fb_2048_1843_25[2048] = {
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

template <typename B, typename R, class API_polar>
class Decoder_polar_SC_fast_sys_N2048_K1843_SNR25 : public Decoder_polar_SC_fast_sys<B, R, API_polar>
{
public:
	Decoder_polar_SC_fast_sys_N2048_K1843_SNR25(const int& K, const int& N, const mipp::vector<B>& frozen_bits, const int n_frames = 1)
	: Decoder_polar_SC_fast_sys<B, R, API_polar>(K, N, frozen_bits, n_frames)
	{
		assert(N == 2048);
		assert(K == 1843);
		
		auto i = 0;
		while (i < 2048 && Decoder_polar_SC_fast_sys_fb_2048_1843_25[i] == frozen_bits[i]) i++;
		assert(i == 2048);
	}

	virtual ~Decoder_polar_SC_fast_sys_N2048_K1843_SNR25()
	{
	}

	// depth = 7, reverse depth = 4, size = 16, calls = 2
	inline void r07(const int off_l, const int off_s)
	{
	}

	// depth = 9, reverse depth = 2, size = 4, calls = 2
	__attribute__((always_inline))
	inline void r09(const int off_l, const int off_s)
	{
	}

	// depth = 9, reverse depth = 2, size = 4, calls = 10
	__attribute__((always_inline))
	inline void s9(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template spc<   4>(s, l, off_l+   0,                       off_s+   0,    4);
	}

	// depth = 8, reverse depth = 3, size = 8, calls = 2
	__attribute__((always_inline))
	inline void r09s9(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		r09(off_l+8, off_s+0);
		API_polar::template g0 <   4>(   l, off_l+   0, off_l+   4,            off_l+   8,    4);
		s9(off_l+8, off_s+4);
		API_polar::template xo0<   4>(s,    off_s+   4,                       off_s+   0,    4);
	}

	// depth = 8, reverse depth = 3, size = 8, calls = 6
	__attribute__((always_inline))
	inline void re8(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template rep<   8>(s, l, off_l+   0,                       off_s+   0,    8);
	}

	// depth = 9, reverse depth = 2, size = 4, calls = 9
	__attribute__((always_inline))
	inline void re9(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template rep<   4>(s, l, off_l+   0,                       off_s+   0,    4);
	}

	// depth = 8, reverse depth = 3, size = 8, calls = 8
	__attribute__((always_inline))
	inline void re9s9(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template f  <   4>(   l, off_l+   0, off_l+   4,            off_l+   8,    4);
		re9(off_l+8, off_s+0);
		API_polar::template gr <   4>(s, l, off_l+   0, off_l+   4, off_s+   0, off_l+   8,    4);
		s9(off_l+8, off_s+4);
		API_polar::template xo <   4>(s,    off_s+   0, off_s+   4,            off_s+   0,    4);
	}

	// depth = 7, reverse depth = 4, size = 16, calls = 4
	inline void re8re9s9(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template f  <   8>(   l, off_l+   0, off_l+   8,            off_l+  16,    8);
		re8(off_l+16, off_s+0);
		API_polar::template gr <   8>(s, l, off_l+   0, off_l+   8, off_s+   0, off_l+  16,    8);
		re9s9(off_l+16, off_s+8);
		API_polar::template xo <   8>(s,    off_s+   0, off_s+   8,            off_s+   0,    8);
	}

	// depth = 9, reverse depth = 2, size = 4, calls = 4
	__attribute__((always_inline))
	inline void r19(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template h  <   4>(s, l, off_l+   0,                       off_s+   0,    4);
	}

	// depth = 8, reverse depth = 3, size = 8, calls = 4
	__attribute__((always_inline))
	inline void r18(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template h  <   8>(s, l, off_l+   0,                       off_s+   0,    8);
	}

	// depth = 7, reverse depth = 4, size = 16, calls = 2
	inline void re7(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template rep<  16>(s, l, off_l+   0,                       off_s+   0,   16);
	}

	// depth = 10, reverse depth = 1, size = 2, calls = 3
	__attribute__((always_inline))
	inline void r010(const int off_l, const int off_s)
	{
	}

	// depth = 10, reverse depth = 1, size = 2, calls = 3
	__attribute__((always_inline))
	inline void r110(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template h  <   2>(s, l, off_l+   0,                       off_s+   0,    2);
	}

	// depth = 9, reverse depth = 2, size = 4, calls = 3
	__attribute__((always_inline))
	inline void r010r110(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		r010(off_l+4, off_s+0);
		API_polar::template g0 <   2>(   l, off_l+   0, off_l+   2,            off_l+   4,    2);
		r110(off_l+4, off_s+2);
		API_polar::template xo0<   2>(s,    off_s+   2,                       off_s+   0,    2);
	}

	// depth = 8, reverse depth = 3, size = 8, calls = 3
	__attribute__((always_inline))
	inline void r010r110r19(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template f  <   4>(   l, off_l+   0, off_l+   4,            off_l+   8,    4);
		r010r110(off_l+8, off_s+0);
		API_polar::template g  <   4>(s, l, off_l+   0, off_l+   4, off_s+   0, off_l+   8,    4);
		r19(off_l+8, off_s+4);
		API_polar::template xo <   4>(s,    off_s+   0, off_s+   4,            off_s+   0,    4);
	}

	// depth = 7, reverse depth = 4, size = 16, calls = 2
	inline void re8r010r110r19(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template f  <   8>(   l, off_l+   0, off_l+   8,            off_l+  16,    8);
		re8(off_l+16, off_s+0);
		API_polar::template gr <   8>(s, l, off_l+   0, off_l+   8, off_s+   0, off_l+  16,    8);
		r010r110r19(off_l+16, off_s+8);
		API_polar::template xo <   8>(s,    off_s+   0, off_s+   8,            off_s+   0,    8);
	}

	// depth = 7, reverse depth = 4, size = 16, calls = 3
	inline void s7(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template spc<  16>(s, l, off_l+   0,                       off_s+   0,   16);
	}

	// depth = 6, reverse depth = 5, size = 32, calls = 2
	inline void re8r010r110r19s7(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template f  <  16>(   l, off_l+   0, off_l+  16,            off_l+  32,   16);
		re8r010r110r19(off_l+32, off_s+0);
		API_polar::template g  <  16>(s, l, off_l+   0, off_l+  16, off_s+   0, off_l+  32,   16);
		s7(off_l+32, off_s+16);
		API_polar::template xo <  16>(s,    off_s+   0, off_s+  16,            off_s+   0,   16);
	}

	// depth = 8, reverse depth = 3, size = 8, calls = 3
	__attribute__((always_inline))
	inline void s8(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template spc<   8>(s, l, off_l+   0,                       off_s+   0,    8);
	}

	// depth = 7, reverse depth = 4, size = 16, calls = 2
	inline void re9s9s8(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template f  <   8>(   l, off_l+   0, off_l+   8,            off_l+  16,    8);
		re9s9(off_l+16, off_s+0);
		API_polar::template g  <   8>(s, l, off_l+   0, off_l+   8, off_s+   0, off_l+  16,    8);
		s8(off_l+16, off_s+8);
		API_polar::template xo <   8>(s,    off_s+   0, off_s+   8,            off_s+   0,    8);
	}

	// depth = 6, reverse depth = 5, size = 32, calls = 2
	inline void r16(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template h  <  32>(s, l, off_l+   0,                       off_s+   0,   32);
	}

	// depth = 7, reverse depth = 4, size = 16, calls = 3
	inline void r17(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template h  <  16>(s, l, off_l+   0,                       off_s+   0,   16);
	}

	// depth = 7, reverse depth = 4, size = 16, calls = 2
	inline void re9s9r18(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template f  <   8>(   l, off_l+   0, off_l+   8,            off_l+  16,    8);
		re9s9(off_l+16, off_s+0);
		API_polar::template g  <   8>(s, l, off_l+   0, off_l+   8, off_s+   0, off_l+  16,    8);
		r18(off_l+16, off_s+8);
		API_polar::template xo <   8>(s,    off_s+   0, off_s+   8,            off_s+   0,    8);
	}

	// depth = 4, reverse depth = 7, size = 128, calls = 2
	inline void s4(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template spc< 128>(s, l, off_l+   0,                       off_s+   0,  128);
	}

	// depth = 3, reverse depth = 8, size = 256, calls = 2
	inline void r13(const int off_l, const int off_s)
	{
		using namespace tools;

		auto &l = this->l;
		auto &s = this->s;

		API_polar::template h  < 256>(s, l, off_l+   0,                       off_s+   0,  256);
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

		API_polar::template f  <1024>(   l,    0+   0,    0+1024,               0+2048, 1024);
		API_polar::template f  < 512>(   l, 2048+   0, 2048+ 512,            2048+1024,  512);
		API_polar::template f  < 256>(   l, 3072+   0, 3072+ 256,            3072+ 512,  256);
		API_polar::template f  < 128>(   l, 3584+   0, 3584+ 128,            3584+ 256,  128);
		API_polar::template f  <  64>(   l, 3840+   0, 3840+  64,            3840+ 128,   64);
		API_polar::template g0 <  32>(   l, 3968+   0, 3968+  32,            3968+  64,   32);
		r07(4064, 32);
		API_polar::template g0 <  16>(   l, 4032+   0, 4032+  16,            4032+  32,   16);
		API_polar::template g0 <   8>(   l, 4064+   0, 4064+   8,            4064+  16,    8);
		r09s9(4080, 56);
		API_polar::template xo0<   8>(s,      48+   8,                         48+   0,    8);
		API_polar::template xo0<  16>(s,      32+  16,                         32+   0,   16);
		API_polar::template xo0<  32>(s,       0+  32,                          0+   0,   32);
		API_polar::template g  <  64>(s, l, 3840+   0, 3840+  64,    0+   0, 3840+ 128,   64);
		API_polar::template f  <  32>(   l, 3968+   0, 3968+  32,            3968+  64,   32);
		r07(4064, 64);
		API_polar::template g0 <  16>(   l, 4032+   0, 4032+  16,            4032+  32,   16);
		re8re9s9(4064, 80);
		API_polar::template xo0<  16>(s,      64+  16,                         64+   0,   16);
		API_polar::template g  <  32>(s, l, 3968+   0, 3968+  32,   64+   0, 3968+  64,   32);
		API_polar::template f  <  16>(   l, 4032+   0, 4032+  16,            4032+  32,   16);
		re8re9s9(4064, 96);
		API_polar::template g  <  16>(s, l, 4032+   0, 4032+  16,   96+   0, 4032+  32,   16);
		API_polar::template f  <   8>(   l, 4064+   0, 4064+   8,            4064+  16,    8);
		API_polar::template f  <   4>(   l, 4080+   0, 4080+   4,            4080+   8,    4);
		re9(4088, 112);
		API_polar::template gr <   4>(s, l, 4080+   0, 4080+   4,  112+   0, 4080+   8,    4);
		r19(4088, 116);
		API_polar::template xo <   4>(s,     112+   0,  112+   4,             112+   0,    4);
		API_polar::template g  <   8>(s, l, 4064+   0, 4064+   8,  112+   0, 4064+  16,    8);
		r18(4080, 120);
		API_polar::template xo <   8>(s,     112+   0,  112+   8,             112+   0,    8);
		API_polar::template xo <  16>(s,      96+   0,   96+  16,              96+   0,   16);
		API_polar::template xo <  32>(s,      64+   0,   64+  32,              64+   0,   32);
		API_polar::template xo <  64>(s,       0+   0,    0+  64,               0+   0,   64);
		API_polar::template g  < 128>(s, l, 3584+   0, 3584+ 128,    0+   0, 3584+ 256,  128);
		API_polar::template f  <  64>(   l, 3840+   0, 3840+  64,            3840+ 128,   64);
		API_polar::template f  <  32>(   l, 3968+   0, 3968+  32,            3968+  64,   32);
		API_polar::template f  <  16>(   l, 4032+   0, 4032+  16,            4032+  32,   16);
		re7(4064, 128);
		API_polar::template gr <  16>(s, l, 4032+   0, 4032+  16,  128+   0, 4032+  32,   16);
		re8re9s9(4064, 144);
		API_polar::template xo <  16>(s,     128+   0,  128+  16,             128+   0,   16);
		API_polar::template g  <  32>(s, l, 3968+   0, 3968+  32,  128+   0, 3968+  64,   32);
		re8r010r110r19s7(4032, 160);
		API_polar::template xo <  32>(s,     128+   0,  128+  32,             128+   0,   32);
		API_polar::template g  <  64>(s, l, 3840+   0, 3840+  64,  128+   0, 3840+ 128,   64);
		API_polar::template f  <  32>(   l, 3968+   0, 3968+  32,            3968+  64,   32);
		API_polar::template f  <  16>(   l, 4032+   0, 4032+  16,            4032+  32,   16);
		re9s9s8(4064, 192);
		API_polar::template g  <  16>(s, l, 4032+   0, 4032+  16,  192+   0, 4032+  32,   16);
		s7(4064, 208);
		API_polar::template xo <  16>(s,     192+   0,  192+  16,             192+   0,   16);
		API_polar::template g  <  32>(s, l, 3968+   0, 3968+  32,  192+   0, 3968+  64,   32);
		r16(4032, 224);
		API_polar::template xo <  32>(s,     192+   0,  192+  32,             192+   0,   32);
		API_polar::template xo <  64>(s,     128+   0,  128+  64,             128+   0,   64);
		API_polar::template xo < 128>(s,       0+   0,    0+ 128,               0+   0,  128);
		API_polar::template g  < 256>(s, l, 3072+   0, 3072+ 256,    0+   0, 3072+ 512,  256);
		API_polar::template f  < 128>(   l, 3584+   0, 3584+ 128,            3584+ 256,  128);
		API_polar::template f  <  64>(   l, 3840+   0, 3840+  64,            3840+ 128,   64);
		API_polar::template f  <  32>(   l, 3968+   0, 3968+  32,            3968+  64,   32);
		API_polar::template f  <  16>(   l, 4032+   0, 4032+  16,            4032+  32,   16);
		re7(4064, 256);
		API_polar::template gr <  16>(s, l, 4032+   0, 4032+  16,  256+   0, 4032+  32,   16);
		API_polar::template f  <   8>(   l, 4064+   0, 4064+   8,            4064+  16,    8);
		r09s9(4080, 272);
		API_polar::template g  <   8>(s, l, 4064+   0, 4064+   8,  272+   0, 4064+  16,    8);
		s8(4080, 280);
		API_polar::template xo <   8>(s,     272+   0,  272+   8,             272+   0,    8);
		API_polar::template xo <  16>(s,     256+   0,  256+  16,             256+   0,   16);
		API_polar::template g  <  32>(s, l, 3968+   0, 3968+  32,  256+   0, 3968+  64,   32);
		API_polar::template f  <  16>(   l, 4032+   0, 4032+  16,            4032+  32,   16);
		re9s9s8(4064, 288);
		API_polar::template g  <  16>(s, l, 4032+   0, 4032+  16,  288+   0, 4032+  32,   16);
		r17(4064, 304);
		API_polar::template xo <  16>(s,     288+   0,  288+  16,             288+   0,   16);
		API_polar::template xo <  32>(s,     256+   0,  256+  32,             256+   0,   32);
		API_polar::template g  <  64>(s, l, 3840+   0, 3840+  64,  256+   0, 3840+ 128,   64);
		API_polar::template f  <  32>(   l, 3968+   0, 3968+  32,            3968+  64,   32);
		API_polar::template f  <  16>(   l, 4032+   0, 4032+  16,            4032+  32,   16);
		re9s9r18(4064, 320);
		API_polar::template g  <  16>(s, l, 4032+   0, 4032+  16,  320+   0, 4032+  32,   16);
		r17(4064, 336);
		API_polar::template xo <  16>(s,     320+   0,  320+  16,             320+   0,   16);
		API_polar::template g  <  32>(s, l, 3968+   0, 3968+  32,  320+   0, 3968+  64,   32);
		r16(4032, 352);
		API_polar::template xo <  32>(s,     320+   0,  320+  32,             320+   0,   32);
		API_polar::template xo <  64>(s,     256+   0,  256+  64,             256+   0,   64);
		API_polar::template g  < 128>(s, l, 3584+   0, 3584+ 128,  256+   0, 3584+ 256,  128);
		s4(3840, 384);
		API_polar::template xo < 128>(s,     256+   0,  256+ 128,             256+   0,  128);
		API_polar::template xo < 256>(s,       0+   0,    0+ 256,               0+   0,  256);
		API_polar::template g  < 512>(s, l, 2048+   0, 2048+ 512,    0+   0, 2048+1024,  512);
		API_polar::template f  < 256>(   l, 3072+   0, 3072+ 256,            3072+ 512,  256);
		API_polar::template f  < 128>(   l, 3584+   0, 3584+ 128,            3584+ 256,  128);
		API_polar::template f  <  64>(   l, 3840+   0, 3840+  64,            3840+ 128,   64);
		API_polar::template f  <  32>(   l, 3968+   0, 3968+  32,            3968+  64,   32);
		API_polar::template f  <  16>(   l, 4032+   0, 4032+  16,            4032+  32,   16);
		re8re9s9(4064, 512);
		API_polar::template g  <  16>(s, l, 4032+   0, 4032+  16,  512+   0, 4032+  32,   16);
		re9s9r18(4064, 528);
		API_polar::template xo <  16>(s,     512+   0,  512+  16,             512+   0,   16);
		API_polar::template g  <  32>(s, l, 3968+   0, 3968+  32,  512+   0, 3968+  64,   32);
		API_polar::template f  <  16>(   l, 4032+   0, 4032+  16,            4032+  32,   16);
		API_polar::template f  <   8>(   l, 4064+   0, 4064+   8,            4064+  16,    8);
		r010r110r19(4080, 544);
		API_polar::template g  <   8>(s, l, 4064+   0, 4064+   8,  544+   0, 4064+  16,    8);
		r18(4080, 552);
		API_polar::template xo <   8>(s,     544+   0,  544+   8,             544+   0,    8);
		API_polar::template g  <  16>(s, l, 4032+   0, 4032+  16,  544+   0, 4032+  32,   16);
		r17(4064, 560);
		API_polar::template xo <  16>(s,     544+   0,  544+  16,             544+   0,   16);
		API_polar::template xo <  32>(s,     512+   0,  512+  32,             512+   0,   32);
		API_polar::template g  <  64>(s, l, 3840+   0, 3840+  64,  512+   0, 3840+ 128,   64);
		API_polar::template spc<  64>(s, l, 3968+   0,                        576+   0,   64);
		API_polar::template xo <  64>(s,     512+   0,  512+  64,             512+   0,   64);
		API_polar::template g  < 128>(s, l, 3584+   0, 3584+ 128,  512+   0, 3584+ 256,  128);
		s4(3840, 640);
		API_polar::template xo < 128>(s,     512+   0,  512+ 128,             512+   0,  128);
		API_polar::template g  < 256>(s, l, 3072+   0, 3072+ 256,  512+   0, 3072+ 512,  256);
		r13(3584, 768);
		API_polar::template xo < 256>(s,     512+   0,  512+ 256,             512+   0,  256);
		API_polar::template xo < 512>(s,       0+   0,    0+ 512,               0+   0,  512);
		API_polar::template g  <1024>(s, l,    0+   0,    0+1024,    0+   0,    0+2048, 1024);
		API_polar::template f  < 512>(   l, 2048+   0, 2048+ 512,            2048+1024,  512);
		API_polar::template f  < 256>(   l, 3072+   0, 3072+ 256,            3072+ 512,  256);
		API_polar::template f  < 128>(   l, 3584+   0, 3584+ 128,            3584+ 256,  128);
		API_polar::template f  <  64>(   l, 3840+   0, 3840+  64,            3840+ 128,   64);
		API_polar::template f  <  32>(   l, 3968+   0, 3968+  32,            3968+  64,   32);
		re8r010r110r19s7(4032, 1024);
		API_polar::template g  <  32>(s, l, 3968+   0, 3968+  32, 1024+   0, 3968+  64,   32);
		API_polar::template spc<  32>(s, l, 4032+   0,                       1056+   0,   32);
		API_polar::template xo <  32>(s,    1024+   0, 1024+  32,            1024+   0,   32);
		API_polar::template g  <  64>(s, l, 3840+   0, 3840+  64, 1024+   0, 3840+ 128,   64);
		API_polar::template h  <  64>(s, l, 3968+   0,                       1088+   0,   64);
		API_polar::template xo <  64>(s,    1024+   0, 1024+  64,            1024+   0,   64);
		API_polar::template g  < 128>(s, l, 3584+   0, 3584+ 128, 1024+   0, 3584+ 256,  128);
		API_polar::template h  < 128>(s, l, 3840+   0,                       1152+   0,  128);
		API_polar::template xo < 128>(s,    1024+   0, 1024+ 128,            1024+   0,  128);
		API_polar::template g  < 256>(s, l, 3072+   0, 3072+ 256, 1024+   0, 3072+ 512,  256);
		r13(3584, 1280);
		API_polar::template xo < 256>(s,    1024+   0, 1024+ 256,            1024+   0,  256);
		API_polar::template g  < 512>(s, l, 2048+   0, 2048+ 512, 1024+   0, 2048+1024,  512);
		API_polar::template h  < 512>(s, l, 3072+   0,                       1536+   0,  512);
		API_polar::template xo < 512>(s,    1024+   0, 1024+ 512,            1024+   0,  512);
		API_polar::template xo <1024>(s,       0+   0,    0+1024,               0+   0, 1024);
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
