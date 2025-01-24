#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *b;
	
	public:
		Dog();
		~Dog();
		Dog(const Dog& rhs);
		Dog	&operator = (const Dog &rhs);

		void 		makeSound() const;
		void		setIdea(std::string idea);
		void		printIdea();
};

#endif