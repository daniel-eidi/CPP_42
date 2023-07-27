#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include <Bureaucrat.hpp>

class Bureaucrat;

class AForm
{

	public:

		AForm(std::string name, int gradeToSign, int gradeToExec) ;
		AForm( AForm const & src );
		virtual ~AForm();

		AForm &		operator=( AForm const & copy );

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
		void 	execute(Bureaucrat const & executor);
		virtual void execForm(void) = 0;

	private:
		const std::string	_name ;
		const int			_gradeToSign ;
		const int			_gradeToExec ;
		bool				_isSigned;


};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif 
/* ****************************************************** AForm_H */
