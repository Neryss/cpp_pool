#include "Pony.hpp"

void	ponyOnTheHeap(bool diamond, bool fly, std::string name)
{
	Pony	pony;

	pony.can_fly = fly;
	pony.is_diamond = diamond;
	pony.name = name;
}

void	ponyOnTheStack(bool diamond, bool fly, std::string name)
{
	Pony	*pony;

	pony = new Pony;
	pony->is_diamond = diamond;
	pony->can_fly = fly;
	pony->name = name;
}