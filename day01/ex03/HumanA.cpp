#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

HumanA::~HumanA()
{
}
