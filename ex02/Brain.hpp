#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain
{
	private:
		int			idx;

	protected:
		std::string	*ideas;
	
	public:
		Brain();
		~Brain();
		Brain(const Brain &rhs);
		Brain &operator=(const Brain &rhs);
		
		void 		setIdea(std::string idea);
		std::string getIdea(void);
};

#endif