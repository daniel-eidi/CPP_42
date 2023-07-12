#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}

// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &assign)
{
	if( this != &assign)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = assign._ideas[i];
		
	}
	return *this;
}

void Brain::insertIdea(std::string newidea)
{
		_ideas[0] = newidea;

}

void Brain::showIdea()
{
	std::cout << "As idéias são:" << std::endl ;
	for (int i = 0; i < 100; i++)
		if(_ideas[i] != "")
			std::cout <<_ideas[i] << std::endl ;
}