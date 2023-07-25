#include <AForm.hpp>
#include <Bureaucrat.hpp>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) , _isSigned(false)
{
	try{
		if (gradeToSign > 150 || gradeToExec > 150 )  
			throw (AForm::GradeTooLowException());
		if (gradeToSign < 1  || gradeToExec < 1)
			throw (AForm::GradeTooHighException());
		std::cout << "\e[0;32mAForm created...\e[0m" << std::endl;
	}
	catch( const AForm::GradeTooLowException & e){
		std::cerr << "ERROR CREATING AForm: " << e.what() << std::endl;

	}
	catch( const AForm::GradeTooHighException & e){
		std::cerr << "ERROR CREATING AForm: "  << e.what() << std::endl;
	}
	return;
}


AForm::AForm( const AForm & src ) : _name(src._name) , _gradeToSign(src._gradeToSign) ,  _gradeToExec(src._gradeToExec) , _isSigned(src._isSigned)
{
	std::cout << "\e[0;32mReference Constructor called of AForm\e[0m" << std::endl;
}

AForm &	AForm::operator=( AForm const & copy )
{
	if ( this != &copy )
		_isSigned = copy._isSigned;
	std::cout << "\e[0;32mCopy Constructor called of AForm\e[0m" << std::endl;
	return *this;
}


void AForm::beSigned( const Bureaucrat& signer)
{
	try
	{
		if(signer.getGrade() > _gradeToSign)
			throw(AForm::GradeTooLowException());
		if(_isSigned == true)
			throw(std::out_of_range("AForm already signed..."));
		_isSigned = true;
		std::cerr << signer.getName() << " signed " << this->getName() << std::endl;
	}
	catch(const AForm::GradeTooLowException & e)
	{
		std::cout << signer.getName() << " couldn’t sign " << this->getName() << " because " << e.what() << std::endl;
	}
	catch( std::out_of_range & e)
	{
		std::cout << signer.getName() << " couldn’t sign " << this->getName() << " because " << e.what() << std::endl;
	}
	
}

void 	AForm::execute(Bureaucrat const & executor)
{
	try
	{
		if(executor.getGrade() > _gradeToExec)
			throw(AForm::GradeTooLowException());
		if(_isSigned == false)
			throw(std::out_of_range("Form is not signed, can't be executed..."));
		executeForm();
		std::cerr << executor.getName() << " executed " << this->getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void 	AForm::executeForm()
{

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	std::cout << "\e[0;31mDestructor called of AForm\e[0m" << std::endl;
}




std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << i.getName() << ", AForm grade to sign: " << i.getGradeToSign() << ", AForm grade to execute: " << i.getGradeToExec() << ", AForm is signed:  " << i.isSigned() << std::endl;
	return o;
}


const std::string AForm::getName() const
{
	return _name;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExec() const
{
	return _gradeToExec;
}

bool AForm::isSigned() const
{
	return _isSigned;
}



const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low.";
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high.";
}

