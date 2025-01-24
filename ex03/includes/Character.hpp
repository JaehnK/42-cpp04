#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <sstream>
#include "AMateria.hpp"
//#include "ex03.hpp"

typedef	struct structMaterialList
{
	int					idx;
	AMateria			*m;
	structMaterialList	*prev;
	structMaterialList	*next;
}	MateriaList;


class Character: public ICharacter
{
	private:
		std::string			name;
		AMateria			*inventory[4];
		MateriaList			*history;

	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character &rhs);
		Character &operator=(const Character &rhs);

		std::string const 	&getName() const;
		virtual void 		equip(AMateria* m);
		virtual void 		unequip(int idx);
		virtual void		use(int idx, ICharacter& target);

		void				appendHistory(AMateria* m);
		void				clearHistory();

};

#endif