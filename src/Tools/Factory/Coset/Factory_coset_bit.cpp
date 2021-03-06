#include "Tools/Exceptions/Cannot_allocate.hpp"

#include "Module/Coset/Bit/Coset_bit.hpp"

#include "Factory_coset_bit.hpp"

using namespace aff3ct::module;
using namespace aff3ct::tools;

template <typename B>
Coset<B,B>* Factory_coset_bit<B>
::build(const std::string type,
        const int         K,
        const int         n_frames)
{
	if (type == "STD") return new Coset_bit<B,B>(K, n_frames);

	throw Cannot_allocate("aff3ct::tools::Factory_coset_bit: the factory could not allocate the object.");
}

// ==================================================================================== explicit template instantiation 
#include "Tools/types.h"
#ifdef MULTI_PREC
template struct aff3ct::tools::Factory_coset_bit<B_8 >;
template struct aff3ct::tools::Factory_coset_bit<B_16>;
template struct aff3ct::tools::Factory_coset_bit<B_32>;
template struct aff3ct::tools::Factory_coset_bit<B_64>;
#else
template struct aff3ct::tools::Factory_coset_bit<B>;
#endif
// ==================================================================================== explicit template instantiation
