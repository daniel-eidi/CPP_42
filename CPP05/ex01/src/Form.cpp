//#include <Form.hpp>
#include <Bureaucrat.hpp>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) , _isSigned(false)
{
	try{
		if (gradeToSign > 150 || gradeToExec > 150 )  
			throw (Form::GradeTooLowException());
		if (gradeToSign < 1  || gradeToExec < 1)
			throw (Form::GradeTooHighException());
		std::cout << "\e[0;32mForm created...\e[0m" << std::endl;
	}
	catch( const Form::GradeTooLowException & e){
		std::cerr << "ERROR CREATING FORM: " << e.what() << std::endl;

	}
	catch( const Form::GradeTooHighException & e){
		std::cerr << "ERROR CREATING FORM: "  << e.what() << std::endl;
	}
	return;
}


Form::Form( const Form & src ) : _name(src._name) , _gradeToSign(src._gradeToSign) ,  _gradeToExec(src._gradeToExec) , _isSigned(src._isSigned)
{
	std::cout << "\e[0;32mReference Constructor called of Form\e[0m" << std::endl;
}

Form &	Form::operator=( Form const & copy )
{
	if ( this != &copy )
		_isSigned = copy._isSigned;
	std::cout << "\e[0;32mCopy Constructor called of Form\e[0m" << std::endl;
	return *this;
}


void Form::beSigned( const Bureaucrat& signer)
{
	try
	{
		if(signer.getGrade() > _gradeToSign)
			throw(Form::GradeTooLowException());
		if(_isSigned == true)
			throw(std::out_of_range("Form already signed..."));
		_isSigned = true;
		std::cerr << signer.getName() << " signed " << this->getName() << std::endl;
	}
	catch(const Form::GradeTooLowException & e)
	{
		std::cout << signer.getName() << " couldn’t sign " << this->getName() << " because " << e.what() << std::endl;
	}
	catch( std::out_of_range & e)
	{
		std::cout << signer.getName() << " couldn’t sign " << this->getName() << " because " << e.what() << std::endl;
	}
	
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}




std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << ", Form grade to sign: " << i.getGradeToSign() << ", Form grade to execute: " << i.getGradeToExec() << ", Form is signed:  " << i.isSigned() << std::endl;
	return o;
}


const std::string Form::getName() const
{
	return _name;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExec() const
{
	return _gradeToExec;
}

bool Form::isSigned() const
{
	return _isSigned;
}



const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low.";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high.";
}

