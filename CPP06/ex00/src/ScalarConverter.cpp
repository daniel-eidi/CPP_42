/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:34:17 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/03 10:12:25 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

ScalarConverter::ScalarConverter( void )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ScalarConverter::~ScalarConverter( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter( ScalarConverter const &other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const &other )
{
	std::cout << "Assignation operator called" << std::endl;
	(void)other;
	return (*this);
}

static bool isChar( const std::string &str)
{
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
		return (true);
	return (false);
}

static bool isInt(const std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if(i == 0 && str[i] == '-')
			continue;
		if (!std::isdigit(str[i]))
			return false;
	}
	if (str.length() > 11 && (str[0] != '-' || str.length() > 12))
		return false;
	return true;
}

static bool isFloat( const std::string &str )
{
	bool dot = false;
	bool f = false;

	if (str.compare("nanf") == 0 || str.compare("+inff") == 0 || str.compare("-inff") == 0)
		return true;
	for (size_t i = 0; i < str.length(); i++)
	{
		if(i == 0 && str[i] == '-')
			continue;
		if(i == str.length()-1 && str[i] == 'f')
		{
			f = true;
			continue;
		}
		if (str[i] == '.')
		{
			if (dot)
				return false;
			dot = true;
			continue;
		}
		if (!std::isdigit(str[i]) && !(i == str.length()-1 && str[i] == 'f'))
			return false;
	}
	if (!dot || !f)
		return false;
	return true;
}

static bool isDouble( const std::string &str)
{
	bool dot = false;

	if (str.compare("nan") == 0 || str.compare("+inf") == 0 || str.compare("-inf") == 0)
		return true;
	for (size_t i = 0; i < str.length(); i++)
	{
		if(i == 0 && str[i] == '-')
			continue;
		if (str[i] == '.')
		{
			if (dot)
				return false;
			dot = true;
			continue;
		}
		if (!std::isdigit(str[i]))
			return false;
	}
	if (!dot)
		return false;
	return true;
} 

static int isType(char *input)
{
	std::string str = input;
	
	if (str.empty())
		return (WRONG);
	if (isChar(str))
		return (CHAR);
	if (isInt(str))
		return (INT);
	if (isFloat(str))
		return (FLOAT);
	if (isDouble(str))
		return (DOUBLE);
	return (WRONG);
}

static void printChar( char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
}

static void printInt( int i)
{
	std::cout << "int: " << i << std::endl;
}

static void printFloat( float ft)
{
	std::cout << "float: " << std::fixed << std::setprecision(1) << ft << "f" << std::endl;
}

static void printDouble( double db)
{
	std::cout << "double: " << std::fixed << std::setprecision(1) << db << std::endl;
}

static void convertChar( char *input )
{
	int c = input[0];

	printChar(static_cast<char>(c));
	printInt(static_cast<int>(c));
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
}


static void convertNotChar( char *input )
{
	double db = std::strtod(input, NULL);
	std::string str = input;
    
	if (std::isnan(db) || std::isinf(db))
		std::cout << "char: impossible" << std::endl;
	else if (db < 32 || db > 126)
	{
		if (db > 255)
			std::cout << "char: impossible" << std::endl;
		else 
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		printChar(static_cast<char>(db));
	if (db < std::numeric_limits<int>::min() || db > std::numeric_limits<int>::max() || std::isnan(db) || std::isinf(db))
		std::cout << "int: impossible" << std::endl;
	else
		printInt(static_cast<int>(db));	
	if (static_cast<float>(db) < std::numeric_limits<float>::max() * -1.0f || ( static_cast<float>(db) > std::numeric_limits<float>::max() && (str.compare("+inff") != 0)) )
		std::cout << "float: impossible "   << std::endl;
	else
		printFloat(static_cast<float>(db));
	printDouble(static_cast<double>(db));
}

static void wrongInput( void )
{
	std::cerr << "Error: Invalid input." << std::endl;
	return ;
}

void ScalarConverter::convert( char *input )
{
	int type = isType(input);
	
	switch (type)
	{
	case CHAR:
		convertChar(input);
		break;
	case WRONG:
		wrongInput();
		break;
	default:
		convertNotChar(input);
	}
}