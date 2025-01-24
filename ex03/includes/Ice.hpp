#ifndef ICE_HPP
#define ICE_HPP
#include "ex03.hpp"

class Ice: public AMateria
{
	private:
		
	public:
		Ice();
		~Ice();
		Ice(const AMateria &rhs);
		AMateria &operator = (const AMateria &rhs);
		
		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif