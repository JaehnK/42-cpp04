#include "ex03.hpp"

MateriaSource::MateriaSource()
{

}

MateriaSource::~MateriaSource()
{

}

void	MateriaSource::learnMateria(AMateria *a)
{
	this->type = a->getType();
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *tmp;
	if (type == "ice")
		tmp = new ICE();
	else if (type == "cure")
		tmp = new CURE();
	return (tmp);

}
