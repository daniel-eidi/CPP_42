#include <RobotomyRequestForm.hpp>
#include <Bureaucrat.hpp>


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){} ;
RobotomyRequestForm::~RobotomyRequestForm(){};
void executeForm();

void 	RobotomyRequestForm::execForm()
{
    // Seed the random number generator with the current time
    std::srand(std::time(0) + getpid());
    int randomNumber;
    // Generate a random number between 1 and 100
    randomNumber = (std::rand() ) + 1;
    //wait for time changing
    usleep(1000000); 


    if(randomNumber % 2)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << _target << " robotomize failed."  << std::endl;
}