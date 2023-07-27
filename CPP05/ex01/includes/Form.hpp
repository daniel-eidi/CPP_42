#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <Bureaucrat.hpp>

class Bureaucrat;

class Form
{

	public:

		Form(std::string name, int gradeToSign, int gradeToExec) ;
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & copy );

		class GradeTooLowException : public std::exception 
		{
			public:
				const char* what() const throw() ;
			private:

		};
		class GradeTooHighException : public std::exception 
		{
			public:
				const char* what() const throw() ;
			private:
		};

		const std::string getName() const;

		int		getGradeToSign() const;
		int		getGradeToExec() const;
		bool	isSigned() const;
		void	beSigned(const Bureaucrat &signer);

	private:
		const std::string	_name ;
		const int			_gradeToSign ;
		const int			_gradeToExec ;
		bool				_isSigned;


};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif 
/* ****************************************************** Form_H */