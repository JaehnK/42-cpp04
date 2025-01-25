#include "../includes/ex03.hpp"

MateriaSource::MateriaSource()
{
	idx = 0;
	for (int i = 0; i < 4; i++)
		list[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	int i = 0;
	while (list[i] && i < 4)
		delete list[i++];
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	*this = rhs;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		this->idx = rhs.idx;
		for (int i = 0; i < 4; i++)
		{
			if (rhs.list[i])
				this->list[i] = rhs.list[i]->clone();
			else
				this->list[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *a)
{
	int i = 0;
	while (i < 4 && list[i])
		i++;
	if (i < 4 && a)
	{
		list[i] = a;
	}	
	else
		std::cout << "[MateriaSource]: Failed to learn Materia" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < 4 && list[i])
	{
		if (list[i]->getType() == type)
			return (list[i]->clone());
		i++;
	}
	std::cout << "[MateriaSource]: Failed to create Materia" << std::endl;
	return (NULL);
}
