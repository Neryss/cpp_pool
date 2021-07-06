#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:_name("bob"), _hitpoints(10), _mana(10), _ad(0)
{
	std::cout << "ClapTrap created using the default constr" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
:_name(name), _hitpoints(10), _mana(10), _ad(0)
{
	std::cout << "ClapTrap created using the name constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap *other)
:_name(other->_name), _hitpoints(other->_hitpoints), _mana(other->_mana), _ad(other->_ad)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "<" << _name << "> Is now a pile of scraps" << std::endl;
}

void	ClapTrap::attack(std::string const &name)
{
	std::cout << "<" << _name << "> attacks " << name << ", causing " << _ad << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitpoints -= amount;
	std::cout << "<" << _name << "> has taken " << amount << " points of damage" << std::endl;
	std::cout << "He now has " << _hitpoints << " hitpoints" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitpoints += amount;
	std::cout << "<" << _name << "> has healed " << amount << " hp" << std::endl;
	std::cout << "He now has " << _hitpoints << " hitpoints" << std::endl;
}