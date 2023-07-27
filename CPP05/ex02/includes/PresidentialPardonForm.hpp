#ifndef PresidentialPardonForm_hpp
# define PresidentialPardonForm_hpp

# include <iostream>
# include <string>
# include <exception>
# include <AForm.hpp>
#include <cstdlib>
#include <ctime>
#include <unistd.h> 


class PresidentialPardonForm : public AForm
{

	public:

		PresidentialPardonForm(std::string target) ;
		~PresidentialPardonForm();

		void execForm();

	private:
		const std::string	_target;


};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif 
/* ****************************************************** PresidentialPardonForm_H */