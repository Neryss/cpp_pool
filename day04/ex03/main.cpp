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

	Character	*bob = new Character("bob");
	tmp = src->createMateria("cure");
	Character	*boby = new Character(*bob);
	bob->equip(tmp);
	bob->unequip(0);
	// boby->equip(tmp);
	// boby->unequip(0);

	me->use(0, *bob);
	me->use(1, *boby);

	me->unequip(1);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete boby;
	delete src;
	return (0);
}