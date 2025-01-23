#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "[WrongCat]: Constructer Called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat]: Destructer Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& rhs): WrongAnimal()
{
	std::cout << "[WrongCat]: Copy Constructer Called" << std::endl;
	*this = rhs;
}

WrongCat	&WrongCat::operator=(const WrongCat& rhs)
{
	if (this != &rhs)
	{
		std::cout << "[WrongCat]: Copy Operator Called" << std::endl;
		this->type = rhs.type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "[WrongCat]: MIU MIU" << std::endl;
}




