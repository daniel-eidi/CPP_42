/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:25:49 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/03 18:14:11 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>


int main( int argc, char **argv )
{    
	if (argc != 2)
	{
		std::cerr << "Error: try ./convert {argument}" << std::endl;
		return(1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
