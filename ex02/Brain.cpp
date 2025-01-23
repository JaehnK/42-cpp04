#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Created" << std::endl;
	this->ideas = new std::string[100];
	idx = 0;
}

Brain::~Brain()
{
	std::cout << "[Brain] Died" << std::endl;
	delete[] ideas;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "[Brain] Copy Constructer Called" << std::endl;
	this->ideas = new std::string[100];
	*this = rhs;
}

Brain &Brain::operator=(const Brain &rhs)
{
	int i = 0;
	if (this != &rhs)
	{
		std::cout << "[Brain] Copy Operator Called" << std::endl;
		while (i < 100)
		{
			this->ideas[i] = rhs.ideas[i];
			i++;
		}
	}
	return (*this);
}

void	Brain::setIdea(std::string  idea)
{
	if (idx == 100)
		idx = 0;
	ideas[idx] = idea;
	idx++;
}

std::string Brain::getIdea(void)
{
	if (idx == 0)
		return ("");
	else
		return (ideas[idx - 1]);
}