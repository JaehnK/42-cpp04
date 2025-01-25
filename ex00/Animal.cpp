#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "[Animal]: Constructer Called" << std::endl;
	this->type = "Not Available";
}

Animal::~Animal()
{
	std::cout << "[Animal]: Destructer Called" << std::endl;
}

Animal::Animal(const Animal& rhs)
{

	std::cout << "[Animal]: Copy Constructer Called" << std::endl;
	*this = rhs;
	
}

Animal	&Animal::operator=(const Animal& rhs)
{
	std::cout << "[Animal]: Copy Operater Called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "MakeSound Not Available" << std::endl;
}