#include <WrongAnimal.hpp>

// Constructors
WrongAnimal::WrongAnimal()
{
	_type = "";
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	_type = copy.getType();
	std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	_type = type;
	std::cout << "\e[0;33mFields Constructor called of WrongAnimal\e[0m" << std::endl;
}


// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}


// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	_type = assign.getType();
	return *this;
}


// Getters / Setters
std::string WrongAnimal::getType() const
{
	return _type;
}
void WrongAnimal::setType(std::string type)
{
	_type = type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "animal sound" << std::endl; 
}

