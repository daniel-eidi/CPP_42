#ifndef Intern_HPP
# define Intern_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
#include <AForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>

class AForm;
class PresidentialPardonForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;

class Intern
{

	public:

		Intern() ;
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & copy );

		AForm *makeForm(std::string form, std::string target);

	private:

};

#endif 
/* ****************************************************** Intern_H */
