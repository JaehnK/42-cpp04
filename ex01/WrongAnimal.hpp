#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	private:

	protected:
		std::string	type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& rhs);
		WrongAnimal &operator =(const WrongAnimal& rhs);

		std::string		getType() const;
		void	makeSound() const;
};

#endif