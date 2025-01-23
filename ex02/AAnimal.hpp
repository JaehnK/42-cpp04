#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>
#include <string>

class AAnimal
{
	private:

	protected:
		std::string	type;

	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal& rhs);
		AAnimal &operator =(const AAnimal& rhs);

		std::string		getType() const;
		virtual void	makeSound() const = 0;
};

#endif