#include <PresidentialPardonForm.hpp>
#include <Bureaucrat.hpp>


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){} ;
PresidentialPardonForm::~PresidentialPardonForm(){};
void executeForm();

void 	PresidentialPardonForm::execForm()
{
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox."  << std::endl;
}