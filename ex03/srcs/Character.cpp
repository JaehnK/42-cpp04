#include "../includes/ex03.hpp"

Character::Character()
{

}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	history = NULL;
}

Character::~Character()
{
	clearHistory();
}

Character::Character(const Character &rhs)
{
	*this = rhs;
}

Character	&Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->history = new MateriaList;

		for (int i = 0; i < 4; i++)
		{
			if (rhs.inventory[i])
			{
				this->inventory[i] = rhs.inventory[i]->clone();
				appendHistory(this->inventory[i]);
			}
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const 	&Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	int i = 0;
	while (this->inventory[i] && i < 4)
		i++;
	if (i < 4)
	{
		this->inventory[i] = m;
		appendHistory(this->inventory[i]);
	}
	else
	{
		std::stringstream ss;
		ss << "[" << name << "] Failed To Equipe Materia";
		std::cout << ss.str() << std::endl;
	}

}

void	Character::unequip(int i)
{
	if ((i < 0 || i > 3) || (inventory[i] == NULL))
	{
		std::stringstream ss;
		ss << "[" << name << "] Failed To Unequipe Materia";
		std::cout << ss.str() << std::endl;
	}
	else
	{
		inventory[i] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if ((idx < 0 || idx > 3) || (inventory[idx] == NULL))
	{
		std::stringstream ss;
		ss << "[" << name << "] Failed To Use Materia";
		std::cout << ss.str() << std::endl;
	}
	else
	{
		inventory[idx]->use(target);
	}
}

void	Character::appendHistory(AMateria* m)
{
	MateriaList *tmp;
	
	tmp = new MateriaList;
	tmp->m = m;
	tmp->next = NULL;
	if (!history)
	{
		tmp->idx = 0;
		tmp->prev = NULL;
	}
	else
	{
		tmp->idx = history->idx + 1;
		tmp->prev = history;
	}
	history = tmp;
}

void	Character::clearHistory()
{
	if (!history)
		return ;
	
	MateriaList *tmp;
	while (history && history->idx >= 0)
	{
		tmp = history->prev;
		delete history->m;
		delete history;
		history = tmp;
	}
}