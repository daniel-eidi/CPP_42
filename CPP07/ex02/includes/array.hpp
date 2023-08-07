/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:27:51 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/07 15:59:41 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <ostream>
# include <iostream>

template<typename T>
class Array
{
	public:
		Array (void)
		{
			this->_array = NULL;
			this->_size = 0;
			std::cout << "Default contructor called." << std::endl;
			return;
		}

		Array (unsigned int n)
		{
			this-> _array = new T[n];
			this-> _size = n;
			std::cout << "Contructor with int "<< n << " as arg, called." << std::endl;
		}

		~Array (void)
		{
			if(_array)
				delete [] _array;
			std::cout << "Destructor called." << std::endl;
		}
		
		T &operator[]( unsigned int index) const
		{
			if (index >= this->_size)
				throw std::out_of_range("Index out of range.");
			return (this->_array[index]);
		}

		Array ( Array const &other )
		{
			this->_array = NULL;
			this->_size = 0;
			*this = other;
			std::cout << "Copy constructor called" << std::endl;
			return ;
		}

		Array &operator=( Array const &other )
		{
			if (this != &other)
			{
				if (this->_array)
					delete [] this->_array;
				this->_array = new T[other._size];
				this->_size = other._size;
				for (unsigned int i = 0; i < other._size; i++)
				{
					this->_array[i] = other._array[i];
				}
			}
			std::cout << "Assignation operator called." << std::endl;
			return (*this);
		}

	private:
		T *_array;
		unsigned int _size;
};

#endif
