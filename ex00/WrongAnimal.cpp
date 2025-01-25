#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "[WrongAnimal]: Constructer Called" << std::endl;
	this->type = "Not Available(Wrong Animal)";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal]: Destructer Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{

	std::cout << "[WrongAnimal]: Copy Constructer Called" << std::endl;
	*this = rhs;
	
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "[WrongAnimal]: Copy Operater Called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "MakeSound Not Available" << std::endl;
}