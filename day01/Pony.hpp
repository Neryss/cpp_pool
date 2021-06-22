#ifndef	PONY_HPP
#define	PONY_HPP

#include <string>
#include <iostream>

class	Pony
{
	public:
		bool		is_diamond;
		bool		can_fly;
		std::string	name;
};

void	ponyOnTheStack(bool diamond, bool fly, std::string name);
void	ponyOnTheHeap(bool diamond, bool fly, std::string name);

#endif