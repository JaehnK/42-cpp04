#include "Cat.hpp"

Cat::Cat(): Animal()
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

Cat::Cat(const Cat& rhs): Animal()
{
	std::cout << "[Cat]: Copy Constructer Called" << std::endl;
	b = new Brain(*rhs.b);
	this->type = rhs.type;
}

Cat	&Cat::operator=(const Cat& rhs)
{
	std::cout << "[Cat]: Copy Operator Called" << std::endl;
	if (this != &rhs) 
	{
		delete b;
     	b = new Brain(*rhs.b);
		this->type = rhs.type;
    }
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "[Cat]: Meow Meow" << std::endl;
}

void	Cat::setIdea(std::string idea)
{
	this->b->setIdea(idea);
}

void	Cat::printIdea()
{
	this->b->printIdea();
}


