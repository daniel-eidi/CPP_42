#include <Dog.hpp>

// Constructors
Dog::Dog() : Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal()
{
	this->_type = copy._type;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	Animal::operator=(assign);
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "auau...auau..." << std::endl; 
}


