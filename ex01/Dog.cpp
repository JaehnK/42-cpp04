#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "[Dog]: Constructer Called" << std::endl;
	this->type = "Dog";
	this->b = new Brain;
}

Dog::~Dog()
{
	std::cout << "[Dog]: Destructer Called" << std::endl;
	delete b;
}

Dog::Dog(const Dog& rhs): Animal()
{
	std::cout << "[Dog]: Copy Constructer Called" << std::endl;
 	b = new Brain(*rhs.b);
	this->type = rhs.type;
}

Dog	&Dog::operator=(const Dog& rhs)
{
	std::cout << "[Dog]: Copy Operator Called" << std::endl;
	if (this != &rhs) 
	{
		delete b;
     	b = new Brain(*rhs.b);
		this->type = rhs.type;
    }
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "[Dog]: BARK BARK" << std::endl;
}

void	Dog::setIdea(std::string idea)
{
	this->b->setIdea(idea);
}

void	Dog::printIdea()
{
	this->b->printIdea();
}


