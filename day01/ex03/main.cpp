#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("bob", club);
		bob.attack();
		club.setType("magnificient unbreakable diamon staff");
		bob.attack();
		std::cout << "Current weapon : " << club.getType() << std::endl;
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("wonderful eridium sword");
		jim.attack();
		std::cout << "Current weapon : " << club.getType() << std::endl;
	}
	return (0);
}