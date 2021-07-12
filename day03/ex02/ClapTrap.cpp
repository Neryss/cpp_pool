#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:_name("bob"), _hitpoints(100), _mana(50), _ad(20)
{
	std::cout << "ClapTrap created using the default constr" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
:_name(name), _hitpoints(100), _mana(50), _ad(20)
{
	std::cout << "ClapTrap created using the name constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
:_name(other._name), _hitpoints(other._hitpoints), _mana(other._mana), _ad(other._ad)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "<" << _name << "> Is now a pile of scraps" << std::endl;
}

int		ClapTrap::get_ad()
{
	return (_ad);
}

void	ClapTrap::attack(std::string const &name)
{
	std::cout << "<" << _name << "> attacks <" << name << ">, causing " << _ad << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitpoints -= amount;
	std::cout << "<" << _name << "> has taken " << amount << " points of damage" << std::endl;
	std::cout << "He now has " << _hitpoints << " hitpoints" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_mana <= 0)
	{
		std::cout << "<" << _name << "> doesn't have enough mana" << std::endl;
		return ;
	}
	_mana -= 1;
	_hitpoints += amount;
	std::cout << "<" << _name << "> has healed " << amount << " hp" << std::endl;
	std::cout << "He now has " << _hitpoints << " hitpoints" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap *other)
{
	_name = other->_name;
	_hitpoints = other->_hitpoints;
	_mana = other->_mana;
	_ad = other->_ad;
	return (*this);
}

void	ClapTrap::displayStats()
{
	std::cout << "<" + _name + ">: " << "[HP] " << _hitpoints << std::endl;
	std::cout << "[MANA] " << _mana << std::endl;
	std::cout << "[AD] " << _ad << std::endl;
}