#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	__ideas = NULL;
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	__ideas = copy.get_ideas();
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(std::string *ideas)
{
	__ideas = ideas;
	std::cout << "\e[0;33mFields Constructor called of Brain\e[0m" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &assign)
{
	__ideas = assign.get_ideas();
	return *this;
}


// Getters / Setters
std::string *Brain::get_ideas() const
{
	return __ideas;
}
