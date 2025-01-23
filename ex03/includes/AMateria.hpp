#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ex03.hpp"

class AMateria
{
	private:

	protected:
		std::string	type;
		
	public:
		AMateria();
		AMateria(std::string const &type);
		~AMateria();
		AMateria(const AMateria &rhs);
		AMateria	&operator=(const AMateria &rhs);

		std::string const	&getType() const;
		virtual	AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target); // 흠 이 함수 채워야하는데
};

#endif