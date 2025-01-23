#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource: public IMateriaSource, public AMateria
{
private:
	
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &rhs);
	
	void learnMateria(AMateria *a);
	AMateria* createMateria(std::string const & type);
};

#endif