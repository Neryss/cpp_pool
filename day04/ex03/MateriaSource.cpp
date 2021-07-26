#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = 0;
	std::cout << "materia source created" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = other._materias[i];
	std::cout << "materia source created by copy" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			_materias[i] = other._materias[i];
	}
	std::cout << "materia source assigned" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _materias[i];
	std::cout << "Materia source deleted" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materias[i] && m)
		{
			_materias[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] && _materias[i]->getType() == type)
		{
			AMateria	*copy = _materias[i]->clone();
			return (copy);
		}
	}
	return (0);
}
