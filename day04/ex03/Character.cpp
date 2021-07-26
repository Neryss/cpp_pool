#include "Character.hpp"

Character::Character(const std::string name)
:_name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
	std::cout << _name << " is born" << std::endl;
}

Character::Character(const Character &other)
:_name(other._name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = other._materia[i]->clone();
	std::cout << _name << " borned by copy" << std::endl;
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
			_materia[i] = other._materia[i]->clone();
	}
	std::cout << _name << " assigned" << std::endl;
	return (*this);
}
//shouldn't be able to to that
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _materia[i];
	std::cout << "character now deleted" << std::endl;
}

std::string const	&Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
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
void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "<unequip> index [0-3]" << std::endl;
		return ;
	}
	_materia[idx] = 0;
}

void	Character::use(int idx, Character &target)
{
	if (_materia[idx])
		_materia[idx]->use(target);
}
