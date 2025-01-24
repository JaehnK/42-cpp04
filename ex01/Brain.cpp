#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Created" << std::endl;
	idx = 0;
}

Brain::~Brain()
{
	std::cout << "[Brain]: Died" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "[Brain] Copy Constructer Called" << std::endl;
	*this = rhs;
}

Brain &Brain::operator=(const Brain &rhs)
{
	int i = 0;
	if (this != &rhs)
	{

		std::cout << "[Brain] Copy Operator Called" << std::endl;
		this->idx = rhs.idx;
		while ((i < 100) && rhs.ideas[i].length() > 0)
		{
			this->ideas[i] = rhs.ideas[i]; // std::string은 자체적으로 깊은 복사를 지원하는 대입 연산자를 지님
			std::cout <<"copy: "<< this->ideas[i] << std::endl;
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

void	Brain::printIdea()
{
	int i = 0;
	while (i < idx)
	{
		std::cout << "[Brain " << i <<  "]: " << ideas[i] << std::endl;
		i++;
	}
}