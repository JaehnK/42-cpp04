#include "../includes/ex03.hpp"


AMateria::AMateria()
{

}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

AMateria::~AMateria()
{

}

const std::string &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	return ((void) target);
}

