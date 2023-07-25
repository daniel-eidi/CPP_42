#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

# include <iostream>
# include <string>
# include <exception>
# include <AForm.hpp>


class ShrubberyCreationForm : public AForm
{

	public:

		ShrubberyCreationForm(std::string target) ;
		~ShrubberyCreationForm();

		void executeForm();

	private:
		const std::string	_target;


};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif 
/* ****************************************************** ShrubberyCreationForm_H */