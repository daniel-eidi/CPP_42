/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:25:49 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/07/31 11:43:55 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <AForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>

int main( void )
{    
	

	Bureaucrat bureaucrat1("first",100);
	Bureaucrat bureaucrat2("second",1);
	PresidentialPardonForm form("TESTE");
	Bureaucrat bureaucrat3("third",9);
	bureaucrat1.executeForm(form);
	bureaucrat1.signForm(form);
	bureaucrat2.signForm(form);
	bureaucrat3.signForm(form);
	bureaucrat1.executeForm(form);
	bureaucrat2.executeForm(form);
	bureaucrat2.executeForm(form);
	bureaucrat2.executeForm(form);

	//std::cout << form << std::endl;

    return 0;
}
