#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int	main()
{
	MateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character	*me = new Character("me");

	AMateria	*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	// me->equip(tmp);
	// me->equip(tmp);
	// me->equip(tmp);
	// me->equip(tmp);

	Character	*bob = new Character("bob");
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	Character	*boby = bob;

	me->use(0, *bob);
	me->use(1, *boby);

	me->unequip(1);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return (0);
}