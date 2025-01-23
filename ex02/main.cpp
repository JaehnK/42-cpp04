#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	//const AAnimal *meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;
	
	return 0;
}