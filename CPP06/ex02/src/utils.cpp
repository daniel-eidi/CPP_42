/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:10:14 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/03 17:30:10 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "utils.hpp"

Base	*generate(void)
{
	std::srand(std::time(NULL));
	int		rand = std::rand() % 3;


	if (rand == 0)
		return (new A);
	else if (rand == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type (pointer): A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type (pointer): B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type (pointer): C" << std::endl;
	else
		std::cout << "Neither A nor B nor C pointer" << std::endl;
}

void	identify(Base& p)
{
	try{
		(void) dynamic_cast< A& >(p);
		std::cout << "Type (reference): A" << std::endl;
		return;
	} catch(const std::exception &e){}
	try{
		(void) dynamic_cast< B& >(p);
		std::cout << "Type (reference): B" << std::endl;
		return;
	} catch(const std::exception &e){}
	try{
		(void) dynamic_cast< C& >(p);
		std::cout << "Type (reference): C" << std::endl;
		return;
	} 
	catch (std::exception &e)
	{
				std::cout << "Neither A nor B nor C reference" << std::endl;
	}
}
