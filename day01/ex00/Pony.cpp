#include "Pony.hpp"

void	doThings(Pony pony)
{
	if (pony.is_diamond && pony.name == "Buttstalion")
		std::cout << "I see you're a man of culture aswell :)" << std::endl;
	else if (pony.is_diamond)
		std::cout << "That's a rich pony you got there, wanna sell it?" << std::endl;
	else if (pony.can_fly && !pony.name.empty())
		std::cout << pony.name << " is flying, insane" << std::endl;
	else if (pony.name.empty())
		std::cout << "That's... Inspiring?" << std::endl;
	else
		std::cout << pony.name << ", isn't that a wonderful name?" << std::endl;
}

void	ponyOnTheHeap(bool diamond, bool fly, std::string name)
{
	Pony	pony;

	pony.can_fly = fly;
	pony.is_diamond = diamond;
	pony.name = name;
	doThings(pony);
}

void	ponyOnTheStack(bool diamond, bool fly, std::string name)
{
	Pony	*pony;

	pony = new Pony;
	pony->is_diamond = diamond;
	pony->can_fly = fly;
	pony->name = name;
	doThings(*pony);
	delete pony;
}