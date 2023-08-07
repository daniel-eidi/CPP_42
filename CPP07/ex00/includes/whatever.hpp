/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:27:51 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/04 15:38:26 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <ostream>
# include <iostream>

template<typename T>
void swap(T& a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(T& a, T& b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
T max(T& a, T& b)
{
	if (a > b)
		return a;
	return b;
}

#endif