#ifndef	CURE_HPP
#define	CURE_HPP
#include "ex03.hpp"

class	Cure: public AMateria
{
	private:

	public:
		Cure();
		~Cure();
		Cure(const AMateria &rhs);
		AMateria &operator = (const AMateria &rhs);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif