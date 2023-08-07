/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:27:51 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/07 18:01:03 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <ostream>
# include <iostream>

template<typename T>
void iter(T *array, size_t len, void (*func)(T &element) )
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

template<typename T>
void iter(T *array, size_t len, void (*func)(T const &element) )
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

template<typename T>
void printT(T& a)
{
	std::cout<< a << std::endl;
}

#endif