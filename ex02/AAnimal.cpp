#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "[AAnimal]: Constructer Called" << std::endl;
	this->type = "Not Available";
}

AAnimal::~AAnimal()
{
	std::cout << "[AAnimal]: Destructer Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& rhs)
{

	std::cout << "[AAnimal]: Copy Constructer Called" << std::endl;
	*this = rhs;
	
}

AAnimal	&AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << "[AAnimal]: Copy Operater Called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (type);
}