#ifndef LAUNCHER_EXIT_POLAR_HPP_
#define LAUNCHER_EXIT_POLAR_HPP_

#include "../Launcher_EXIT.hpp"

namespace aff3ct
{
namespace launcher
{
template <typename B = int, typename R = float, typename Q = R>
class Launcher_EXIT_polar : public Launcher_EXIT<B,R,Q>
{
public:
	Launcher_EXIT_polar(const int argc, const char **argv, std::ostream &stream = std::cout);
	virtual ~Launcher_EXIT_polar() {};

protected:
	virtual void build_args();
	virtual void store_args();
	virtual simulation::Simulation* build_simu();

	virtual std::vector<std::pair<std::string,std::string>> header_code   ();
	virtual std::vector<std::pair<std::string,std::string>> header_decoder();
};
}
}

#endif /* LAUNCHER_EXIT_POLAR_HPP_ */
