#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "AMateria.hpp"

class MateriaSource
{
	private:
		AMateria	*_materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		~MateriaSource();
		MateriaSource		&operator=(const MateriaSource &other);
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif