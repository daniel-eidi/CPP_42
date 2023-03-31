/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:41:19 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/03/28 19:04:14 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int main (int argc, char **argv)
{
	Harl Harl;
	if (argc != 2)
	{
		std::cerr << "Wrong args: try ./harlFilter  [DEBUG | INFO | WARNING | ERROR]" <<std::endl;
		return (1);
	}
	Harl.complain(argv[1]);
	return (0);
}