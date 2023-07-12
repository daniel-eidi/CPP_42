#include <Cat.hpp>

// Constructors
Cat::Cat() : Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &copy)  : Animal()
{
	this->_type = copy._type;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat &Cat::operator=(const Cat &assign)
{
	Animal::operator=(assign);
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "miau...miau.." << std::endl; 
}

