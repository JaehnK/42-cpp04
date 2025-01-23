#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog]: Constructer Called" << std::endl;
	this->type = "Dog";
	this->b = new Brain();
}

Dog::~Dog()
{
	std::cout << "[Dog]: Destructer Called" << std::endl;
	delete this->b;
}

Dog::Dog(const Dog& rhs)
{
	std::cout << "[Dog]: Copy Constructer Called" << std::endl;
	*this = rhs;
}

Dog	&Dog::operator=(const Dog& rhs)
{
	std::cout << "[Dog]: Copy Operator Called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "[Dog]: BARK BARK" << std::endl;
}





