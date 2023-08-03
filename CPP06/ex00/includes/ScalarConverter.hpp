/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:33:40 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/01 20:00:33 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <limits>
# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <climits>
# include <cfloat>

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define WRONG 4


class ScalarConverter
{
	private:
	
	ScalarConverter( void );
	~ScalarConverter( void );
	ScalarConverter( ScalarConverter const &other );
	ScalarConverter & operator=( ScalarConverter const &other );

	public:
	
	static void convert( char *input );
};

#endif