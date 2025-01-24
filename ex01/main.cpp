#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	Dog	*dog = new Dog;
	Dog *dog2 = new Dog;

	dog->setIdea("Hello");
	dog->setIdea("World");
	dog->setIdea("ABC");
	dog->printIdea();

	*dog2 = *dog;

	delete dog;

	dog2->setIdea("Dog");
	dog2->printIdea();
	
	delete dog2;
	return 0;
}