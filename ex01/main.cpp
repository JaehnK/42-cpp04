#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
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
	}
	{
		Cat	*cat1 = new Cat;
		Cat	*cat2 = new Cat;

		cat1->setIdea("abcd");
		cat1->setIdea("efg");
		cat1->setIdea("hijk");
		cat1->printIdea();

		*cat2 = *cat1;

		delete cat1;

		cat2->setIdea("New Cat");
		cat2->printIdea();

		delete cat2;

	}
	return 0;
}