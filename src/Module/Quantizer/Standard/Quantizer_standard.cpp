#include <stdexcept>
#include <algorithm>
#include <cmath>

#include "Tools/Math/utils.h"

#include "Quantizer_standard.hpp"

using namespace aff3ct::module;
using namespace aff3ct::tools;

template <typename R, typename Q>
Quantizer_standard<R,Q>
::Quantizer_standard(const int N, const short& fixed_point_pos, const int n_frames, const std::string name)
: Quantizer<R,Q>(N, n_frames, name), 
  val_max(((1 << ((sizeof(Q) * 8) -2))) + ((1 << ((sizeof(Q) * 8) -2)) -1)),
  val_min(-val_max),
  fixed_point_pos(fixed_point_pos),
  factor(1 << fixed_point_pos)
{
	if (sizeof(Q) * 8 <= (unsigned) fixed_point_pos)
		throw std::invalid_argument("aff3ct::module::Quantizer_standard: \"fixed_point_pos\" has to be smaller "
		                            "than \"sizeof(Q)\" * 8.");
}

namespace aff3ct
{
namespace module
{
template <>
Quantizer_standard<float,float>
::Quantizer_standard(const int N, const short& fixed_point_pos, const int n_frames, const std::string name)
: Quantizer<float,float>(N, n_frames, name), val_max(0), val_min(0), fixed_point_pos(0), factor(0) {}
}
}

namespace aff3ct
{
namespace module
{
template <>
Quantizer_standard<double,double>
::Quantizer_standard(const int N, const short& fixed_point_pos, const int n_frames, const std::string name)
: Quantizer<double,double>(N, n_frames, name), val_max(0), val_min(0), fixed_point_pos(0), factor(0) {}
}
}

template <typename R, typename Q>
Quantizer_standard<R,Q>
::Quantizer_standard(const int N, const short& fixed_point_pos, const short& saturation_pos, const int n_frames, 
                     const std::string name)
: Quantizer<R,Q>(N, n_frames, name), 
  val_max(((1 << (saturation_pos -2))) + ((1 << (saturation_pos -2)) -1)),
  val_min(-val_max),
  fixed_point_pos(fixed_point_pos),
  factor(1 << fixed_point_pos)
{
	if (fixed_point_pos <= 0)
		throw std::invalid_argument("aff3ct::module::Quantizer_fast: \"fixed_point_pos\" has to be greater than 0.");
	if (saturation_pos <= 0)
		throw std::invalid_argument("aff3ct::module::Quantizer_fast: \"saturation_pos\" has to be greater than 0.");
	if (saturation_pos < 2)
		throw std::invalid_argument("aff3ct::module::Quantizer_standard: \"saturation_pos\" has to be equal or greater "
		                            "than 2.");
	if (fixed_point_pos > saturation_pos)
		throw std::invalid_argument("aff3ct::module::Quantizer_standard: \"saturation_pos\" has to be equal or greater "
		                            "than \"fixed_point_pos\".");
	if (sizeof(Q) * 8 <= (unsigned) fixed_point_pos)
		throw std::invalid_argument("aff3ct::module::Quantizer_standard: \"fixed_point_pos\" has to be smaller "
		                            "than \"sizeof(Q)\" * 8.");
	if (val_max > +(((1 << ((sizeof(Q) * 8) -2))) + ((1 << ((sizeof(Q) * 8) -2)) -1)))
		throw std::invalid_argument("aff3ct::module::Quantizer_standard: \"val_max\" value is invalid.");
	if (val_min < -(((1 << ((sizeof(Q) * 8) -2))) + ((1 << ((sizeof(Q) * 8) -2)) -1)))
		throw std::invalid_argument("aff3ct::module::Quantizer_standard: \"val_min\" value is invalid.");
}

namespace aff3ct
{
namespace module
{
template <>
Quantizer_standard<float, float>
::Quantizer_standard(const int N, const short& fixed_point_pos, const short& saturation_pos, const int n_frames, 
                     const std::string name)
: Quantizer<float,float>(N, n_frames, name), val_max(0), val_min(0), fixed_point_pos(0), factor(0) {}
}
}

namespace aff3ct
{
namespace module
{
template <>
Quantizer_standard<double, double>
::Quantizer_standard(const int N, const short& fixed_point_pos, const short& saturation_pos, const int n_frames, 
                     const std::string name)
: Quantizer<double,double>(N, n_frames, name), val_max(0), val_min(0), fixed_point_pos(0), factor(0) {}
}
}

template <typename R, typename Q>
Quantizer_standard<R,Q>
::~Quantizer_standard()
{
}

template<typename R, typename Q>
void Quantizer_standard<R,Q>
::process(const R *Y_N1, Q *Y_N2)
{
	auto size = (unsigned)(this->N * this->n_frames);
	for (unsigned i = 0; i < size; i++)
		Y_N2[i] = (Q)saturate((R)std::round((R)factor * Y_N1[i]), (R)val_min, (R)val_max);
}

// ==================================================================================== explicit template instantiation 
#include "Tools/types.h"
#ifdef MULTI_PREC
template class aff3ct::module::Quantizer_standard<R_8,Q_8>;
template class aff3ct::module::Quantizer_standard<R_16,Q_16>;
template class aff3ct::module::Quantizer_standard<R_32,Q_32>;
template class aff3ct::module::Quantizer_standard<R_64,Q_64>;
#else
template class aff3ct::module::Quantizer_standard<R,Q>;
#endif
// ==================================================================================== explicit template instantiation
