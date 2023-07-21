#include <WrongCat.hpp>

// Constructors
WrongCat::WrongCat()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) :  WrongAnimal()
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
}


// Destructor
WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}


// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	WrongAnimal::operator=(assign);
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "miau...miau.." << std::endl; 
}

