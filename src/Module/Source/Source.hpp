/*!
 * \file
 * \brief Generates a message.
 *
 * \section LICENSE
 * This file is under MIT license (https://opensource.org/licenses/MIT).
 */
#ifndef SOURCE_HPP_
#define SOURCE_HPP_

#include <vector>
#include <string>
#include <stdexcept>

#include "Tools/Perf/MIPP/mipp.h"

#include "Module/Module.hpp"

namespace aff3ct
{
namespace module
{
/*!
 * \class Source_i
 *
 * \brief Generates a message.
 *
 * \tparam B: type of the bits in the Source.
 *
 * Please use Source for inheritance (instead of Source_i).
 */
template <typename B = int>
class Source_i : public Module
{
protected:
	const int K; /*!< Number of information bits in one frame */

public:
	/*!
	 * \brief Constructor.
	 *
	 * \param K:        number of information bits in the frame.
	 * \param n_frames: number of frames to process in the Source.
	 * \param name:     Source's name.
	 */
	Source_i(const int K, const int n_frames = 1, const std::string name = "Source_i")
	: Module(n_frames, name), K(K)
	{
		if (K <= 0)
			throw std::invalid_argument("aff3ct::module::Source: \"K\" has to be greater than 0.");
	}

	/*!
	 * \brief Destructor.
	 */
	virtual ~Source_i()
	{
	}

	virtual int get_K() const
	{
		return K;
	}

	/*!
	 * \brief Fulfills a vector with bits.
	 *
	 * \param U_K: a vector of bits to fill.
	 */
	void generate(mipp::vector<B>& U_K)
	{
		if (this->K * this->n_frames != (int)U_K.size())
			throw std::length_error("aff3ct::module::Source: \"U_K.size()\" has to be equal to "
			                        "\"K\" * \"n_frames\".");

		this->generate(U_K.data());
	}

	virtual void generate(B *U_K)
	{
		for (auto f = 0; f < this->n_frames; f++)
			this->_generate(U_K + f * this->K, f);
	}

protected:
	virtual void _generate(B *U_K, const int frame_id)
	{
		throw std::runtime_error("aff3ct::module::Source: \"_generate\" is unimplemented.");
	}
};
}
}

#include "SC_Source.hpp"

#endif /* SOURCE_HPP_ */
