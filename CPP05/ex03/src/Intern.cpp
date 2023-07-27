
#include <Intern.hpp>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Intern::Intern()
{
	std::cout << "\e[0;32mConstructor called of Intern\e[0m" << std::endl;
}


Intern::Intern( const Intern & src ) 
{
	(void)src;
	std::cout << "\e[0;32mReference Constructor called of Intern\e[0m" << std::endl;
}

Intern &	Intern::operator=( Intern const & copy )
{
	(void)copy;
	std::cout << "\e[0;32mCopy Constructor called of Intern\e[0m" << std::endl;
	return *this;
}


Intern::~Intern( ) 
{
	std::cout << "\e[0;32mDestructor called of Intern\e[0m" << std::endl;
}


AForm * Intern::makeForm( std::string form, std::string target)
{
	AForm *newForm = NULL;

	std::string typeForm[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	while ( i < 3 && typeForm[i] != form)
		 i++;
	switch(i) {
		case 0:
			newForm = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << form << "form." << std::endl;
			break;
		case 1:
			newForm = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << form << "form." << std::endl;
			break;
		case 2:
			newForm = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << form << "form."<< std::endl;
			break;
		default:
			std::cout << form << " form doesn’t exist." << std::endl;
	}
	return newForm;
}
