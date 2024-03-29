#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include <Form.hpp>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade) ;
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );
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

		int getGrade() const;

		const std::string getName() const;

		void incrementGrade();

		void decrementGrade();

		void signForm(Form &form);

	private:
		const std::string  _name ;
		int _grade ;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */