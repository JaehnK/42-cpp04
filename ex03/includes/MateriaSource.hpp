#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*list[4];
		int			idx;

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &rhs);
		MateriaSource &operator=(const MateriaSource &rhs);
		
		void learnMateria(AMateria *a);
		AMateria* createMateria(std::string const &type);
};

#endif