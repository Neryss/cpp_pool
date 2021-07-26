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
//shouldn't be able to to that
ICharacter::~ICharacter()
{
	delete _materia;
	std::cout << "character now deleted" << std::endl;
}

std::string const	&ICharacter::getName() const
{
	return (_name);
}

void	ICharacter::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i] && m)
		{
			_materia[i] = m;
			return ;
		}
	}
}
// could create a leak if materia not deleted later
void	ICharacter::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "<unequip> index [0-3]" << std::endl;
		return ;
	}
	_materia[idx] = 0;
}

void	ICharacter::use(int idx, ICharacter &target)
{

}
