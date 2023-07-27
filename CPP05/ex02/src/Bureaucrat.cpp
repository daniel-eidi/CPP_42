#include <Bureaucrat.hpp>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mConstructor called of Bureaucrat\e[0m" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	try{
		if (grade > 150)
			throw (Bureaucrat::GradeTooLowException());
		if (grade < 1)
			throw (Bureaucrat::GradeTooHighException());
		std::cout << "\e[0;32mBureaucrat created...\e[0m" << std::endl;
	}
	catch( const Bureaucrat::GradeTooLowException & e){
		std::cerr << e.what() << std::endl;

	}
	catch( const Bureaucrat::GradeTooHighException & e){
		std::cerr << e.what() << std::endl;
	}
	return;
}


Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src._name) , _grade(src._grade) 
{
	std::cout << "\e[0;32mReference Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
		//this->_name = rhs.getName(); //Não funciona pois a variável é constante
	}
	
	std::cout << "\e[0;32mFields Constructor called of Bureaucrat\e[0m" << std::endl;
	return *this;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}




std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (_grade == 1)
			throw (Bureaucrat::GradeTooHighException());
		_grade--;
	}
	catch( const Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
};

void Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade == 150)
			throw (Bureaucrat::GradeTooLowException());
		_grade++;
	}
	catch( const Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
};

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low.";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high.";
}


void Bureaucrat::signForm(AForm &form)
{
	form.beSigned(*this);
}

void Bureaucrat::executeForm( AForm &form) 
{
	form.execute(*this);
}

