#ifndef RobotomyRequestForm_hpp
# define RobotomyRequestForm_hpp

# include <iostream>
# include <string>
# include <exception>
# include <AForm.hpp>
#include <cstdlib>
#include <ctime>
#include <unistd.h> 


class RobotomyRequestForm : public AForm
{

	public:

		RobotomyRequestForm(std::string target) ;
		~RobotomyRequestForm();

		void execForm();

	private:
		const std::string	_target;


};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif 
/* ****************************************************** RobotomyRequestForm_H */