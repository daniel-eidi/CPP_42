/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:25:49 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/07 16:03:57 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <array.hpp>
# include <ostream>
# include <iostream>

int main(void)
{
	Array<int> arr(2);
		
	arr[0] = 1;
	arr[1] = 2;
	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;
	try
	{
		std::cout << arr[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}