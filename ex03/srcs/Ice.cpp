#include "../includes/ex03.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::~Ice()
{

}

Ice::Ice(const AMateria &rhs)
{
	*this = rhs;
}

AMateria &Ice::operator=(const AMateria &rhs)
{

	if (this != &rhs && rhs.getType() == "ice")
	{
		this->type = rhs.getType();
	}
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria *tmp = new Ice;
	return (tmp);
}

void	Ice::use(ICharacter& target)
{
	std::cout <<"* shoots an ice bolt at " << target.getName() << " *" << std:: endl;
}