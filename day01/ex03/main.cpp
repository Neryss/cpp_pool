#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	Weapon	club = Weapon("crude spiked club");
	HumanA	bob("bob", club);
	bob.attack();
	return (0);
}