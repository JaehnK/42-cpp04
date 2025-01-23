#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character: public ICharacter
{
private:
	std::string	name;
	

public:
	Character();
	Character(std::string name);
	~Character();
	Character(const Character &rhs);
	Character &operator=(const Character &rhs);

	std::string const 	&getName() const;
	void 				equip(AMateria* m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter& target);
};

#endif