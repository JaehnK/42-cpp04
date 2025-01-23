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

AMateria::AMateria(const AMateria &rhs)
{
	*this = rhs;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
}

const std::string &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	
}

