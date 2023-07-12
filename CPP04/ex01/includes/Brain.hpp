#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(std::string *ideas);
		Brain(const Brain &copy);
		//Brain(std::string[] _ideas);
		
		// Destructor
		~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);
		
		// Getters / Setters
		std::string *get_ideas() const;

		void insertIdea(std::string newidea);
		void showIdea();
		
	private:
		std::string _ideas[100];
		
};

#endif