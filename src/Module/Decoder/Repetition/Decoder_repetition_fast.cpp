#include <stdexcept>
#include <algorithm>

#include "Decoder_repetition_fast.hpp"

using namespace aff3ct::module;

template <typename B, typename R>
Decoder_repetition_fast<B,R>
::Decoder_repetition_fast(const int& K, const int& N, const bool buffered_encoding, const int n_frames,
                          const std::string name)
 : Decoder_repetition<B,R>(K, N, buffered_encoding, n_frames, name)
{
	if (this->K % mipp::nElReg<R>())
		throw std::invalid_argument("aff3ct::module::Decoder_repetition_fast: \"K\" has to be a multiple of "
		                            "\"mipp::nElReg<R>()\".");
}

template <typename B, typename R>
Decoder_repetition_fast<B,R>
::~Decoder_repetition_fast()
{
}

template <typename B, typename R>
void Decoder_repetition_fast<B,R>
::_soft_decode(const R *sys, const R *par, R *ext, const int frame_id)
{
	for (auto i = 0; i < this->K; i += mipp::nElReg<R>())
	{
		auto r_ext = mipp::Reg<R>(&sys[i]);
		for (auto j = 0; j < this->rep_count; j++)
			r_ext += &par[j*this->K +i];
		r_ext.store(&ext[i]);
	}
}

// ==================================================================================== explicit template instantiation
#include "Tools/types.h"
#ifdef MULTI_PREC
template class aff3ct::module::Decoder_repetition_fast<B_8,Q_8>;
template class aff3ct::module::Decoder_repetition_fast<B_16,Q_16>;
template class aff3ct::module::Decoder_repetition_fast<B_32,Q_32>;
template class aff3ct::module::Decoder_repetition_fast<B_64,Q_64>;
#else
template class aff3ct::module::Decoder_repetition_fast<B,Q>;
#endif
// ==================================================================================== explicit template instantiation
