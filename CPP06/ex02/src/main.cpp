/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:09:51 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/03 19:00:27 by daeidi-h         ###   ########.fr       */
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
	delete &baseRef;

	std::cout << "--------Testing Invalid -------------" << std::endl;
	
	Base *baseError = new Base();
	Base &baseErrorRef = *new Base();
	identify(baseError);
	identify(baseErrorRef);
	delete baseError;
	delete &baseErrorRef;
	return (0);
}