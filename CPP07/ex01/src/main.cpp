/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:25:49 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/07 12:02:14 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int arr_i[] = {100, 200, 300, 400, 500};
	std::cout << "Int array: " << std::endl;
	iter(arr_i, 5, &printT);
	std::cout << std::endl;

	char arr_c[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	std::cout << "Char array: " << std::endl;
	iter(arr_c, 6, &printT);
	std::cout << std::endl;

	return 0;
}