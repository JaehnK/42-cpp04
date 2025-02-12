#include "../includes/ex03.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	//src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	//tmp = src->createMateria("dd");
	//me->equip(tmp);
	//tmp = src->createMateria("cure");
	//me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	//me->use(30, *bob);

	//bob->use(1, *me);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}

//$> ./a.out | cat -e
//* shoots an ice bolt at bob *$
//* heals bob's wounds *$