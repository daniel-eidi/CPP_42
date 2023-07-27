#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <AForm.hpp>


class ShrubberyCreationForm : public AForm {

	public:

		ShrubberyCreationForm(std::string target) ;
		~ShrubberyCreationForm();

		void execForm(void);

	private:
		const std::string	_target;


};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif 
/* ****************************************************** ShrubberyCreationForm_H */