#include "Tools/Exceptions/Cannot_allocate.hpp"

#include "Module/Encoder/Polar/Encoder_polar.hpp"
#include "Module/Encoder/Polar/Encoder_polar_sys.hpp"

#include "Factory_encoder_polar.hpp"

using namespace aff3ct::module;
using namespace aff3ct::tools;

template <typename B>
Encoder<B>* Factory_encoder_polar<B>
::build(const std::string      type,
        const int              K,
        const int              N,
        const mipp::vector<B> &frozen_bits,
        const bool             sys_encoding,
        const int              n_frames)
{
	     if (type == "POLAR" && !sys_encoding) return new Encoder_polar    <B>(K, N, frozen_bits, n_frames);
	else if (type == "POLAR" &&  sys_encoding) return new Encoder_polar_sys<B>(K, N, frozen_bits, n_frames);

	throw Cannot_allocate("aff3ct::tools::Factory_encoder_polar: the factory could not allocate the object.");
}

// ==================================================================================== explicit template instantiation 
#include "Tools/types.h"
#ifdef MULTI_PREC
template struct aff3ct::tools::Factory_encoder_polar<B_8>;
template struct aff3ct::tools::Factory_encoder_polar<B_16>;
template struct aff3ct::tools::Factory_encoder_polar<B_32>;
template struct aff3ct::tools::Factory_encoder_polar<B_64>;
#else
template struct aff3ct::tools::Factory_encoder_polar<B>;
#endif
// ==================================================================================== explicit template instantiation
