#ifndef AMATERIA_HPP
#define AMATERIA_HPP
//#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	private:

	protected:
		std::string	type;
		
	public:
		AMateria();
		AMateria(std::string const &type);
		virtual	~AMateria();

		std::string const	&getType() const;
		virtual	AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif