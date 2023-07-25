#include <ShrubberyCreationForm.hpp>
#include <Bureaucrat.hpp>

	ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){} ;
	ShrubberyCreationForm::~ShrubberyCreationForm(){};
	void executeForm();

void 	ShrubberyCreationForm::executeForm()
{
	std::ofstream file( "_shrubbery" );

	file <<"                                                         ."<< std::endl;
    file <<"                                          .         ;"<< std::endl;  
    file <<"             .              .              ;%     ;;"<< std::endl;   
    file <<"               ,           ,                :;%  %; "<< std::endl;  
    file <<"                :         ;                   :;%;'     .,   "<< std::endl;
    file <<"       ,.        %;     %;            ;        %;'    ,;"<< std::endl;
    file <<"         ;       ;%;  %%;        ,     %;    ;%;    ,%'"<< std::endl;
    file <<"          %;       %;%;      ,  ;       %;  ;%;   ,%;' "<< std::endl;
    file <<"           ;%;      %;        ;%;        % ;%;  ,%;'"<< std::endl;
    file <<"            `%;.     ;%;     %;'         `;%%;.%;'"<< std::endl;
    file <<"             `:;%.    ;%%. %@;        %; ;@%;%'"<< std::endl;
    file <<"                `:%;.  :;bd%;          %;@%;'"<< std::endl;
    file <<"                  `@%:.  :;%.         ;@@%;'   "<< std::endl;
    file <<"                    `@%.  `;@%.      ;@@%;         "<< std::endl;
    file <<"                      `@%%. `@%%    ;@@%;        "<< std::endl;
    file <<"                        ;@%. :@%%  %@@%;       "<< std::endl;
    file <<"                          %@bd%%%bd%%:;     "<< std::endl;
    file <<"                            #@%%%%%:;;"<< std::endl;
    file <<"                            %@@%%%::;"<< std::endl;
    file <<"                            %@@@%(o);  . '         "<< std::endl;
    file <<"                            %@@@o%;:(.,'         "<< std::endl;
    file <<"                        `.. %@@@o%::;         "<< std::endl;
    file <<"                           `)@@@o%::;         "<< std::endl;
    file <<"                            %@@(o)::;        "<< std::endl;
    file <<"                           .%@@@@%::;         "<< std::endl;
    file <<"                           ;%@@@@%::;.          "<< std::endl;
    file <<"                          ;%@@@@%%:;;;. "<< std::endl;
    file <<"                      ...;%@@@@@%%:;;;;,.. "<< std::endl;
	file.close();
}