#include "../includes/ex03.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::~Cure()
{

}

Cure::Cure(const AMateria &rhs)
{
	*this = rhs;
}

AMateria &Cure::operator = (const AMateria &rhs)
{
	if (this != &rhs && rhs.getType() == "Cure")
	{
		this->type = rhs.getType();
	}
	return (*this);
}

AMateria	*Cure::clone() const
{
	AMateria *tmp = new Cure();
	return (tmp);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}