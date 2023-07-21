#include <Cat.hpp>

// Constructors
Cat::Cat() : Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &copy)  : Animal()
{
	this->_type = copy._type;
	_brain = new Brain(*copy.getBrain());
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	delete _brain;
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

Brain* Cat::getBrain(void) const
{
	return (this->_brain);
}


void Cat::showBrain(void) const
{
	_brain->showIdea();
}

void Cat::insertIdea(std::string newidea) const
{
	_brain->insertIdea(newidea);
}
