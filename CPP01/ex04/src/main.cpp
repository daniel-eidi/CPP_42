/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:41:19 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/03/28 16:19:01 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <replace.hpp>

int main(int argc, char **argv) 
{
//Check args
    if (argc != 4)
	{
		std::cout << "wrong number of args, try ./replace input_file str_to_change new_str" << std::endl;
		return (1);
	}

	std::string inputfile = std::string(argv[1]);
    std::string oldStr = std::string(argv[2]);
    std::string newStr = std::string(argv[3]);
	std::string outputfile = inputfile + ".replace";
	std::string str;

// Open the input file.
    std::ifstream input(inputfile);
    if (!input.is_open()) {
        std::cerr << "Error: could not open input file" << std::endl;
        return 1;
    }

// Open the output file.
    std::ofstream output(outputfile);
    if (!output.is_open()) {
        std::cerr << "Error: could not open output file" << std::endl;
        return 1;
    }
// Replace line by line
    while (std::getline(input, str))
	 {
		std::string newstr = replace(str, oldStr, newStr);
			// Write the line to the output file.
		output << newstr << std::endl;
	}
    return 0;
}
