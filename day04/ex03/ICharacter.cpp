#include "ICharacter.hpp"

ICharacter::ICharacter(const std::string name)
:_name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
	std::cout << _name << " is born" << std::endl;
}

ICharacter::ICharacter(const ICharacter &other)
:_name(other._name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = other._materia[i]->clone();
	std::cout << _name << " borned by copy" << std::endl;
}

ICharacter	&ICharacter::operator=(const ICharacter &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
			_materia[i] = other._materia[i]->clone();
	}
	std::cout << _name << " assigned" << std::endl;
}

ICharacter::~ICharacter()
{
	delete _materia;
	std::cout << "character now deleted" << std::endl;
}

