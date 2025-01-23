#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	std::cout << "[Cat]: Constructer Called" << std::endl;
	this->type = "Cat";
	this->b = new Brain();
}

Cat::~Cat() 
{
	std::cout << "[Cat]: Destructer Called" << std::endl;
	delete b;
}

Cat::Cat(const Cat& rhs): AAnimal()
{
	std::cout << "[Cat]: Copy Constructer Called" << std::endl;
	*this = rhs;
}

Cat	&Cat::operator=(const Cat& rhs)
{
	std::cout << "[Cat]: Copy Operator Called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "[Cat]: Meow Meow" << std::endl;
}



