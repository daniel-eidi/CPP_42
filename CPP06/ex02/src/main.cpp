/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:09:51 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/03 17:34:26 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "utils.hpp"

int main( void )
{
	Base *base = generate();
	Base &baseRef = *generate();
	std::cout << "---------Testing A, B or C ------------" << std::endl;

	identify(baseRef);
	identify(base);
	delete base;

	std::cout << "--------Testing Invalid -------------" << std::endl;
	
	Base *baseError = new Base();
	Base &baseErrorRef = *new Base();
	identify(baseError);
	identify(baseErrorRef);
	delete baseError;
	delete &baseErrorRef;
	delete base;
	delete &baseRef;
	return (0);
}