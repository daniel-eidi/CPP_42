/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:13:12 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/17 12:00:18 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

std::string replace(std::string str_ori, std::string oldStr, std::string newStr)
{
	// If no matches for string.find() were found, the function  returns string::npos. The loop stops.
	for (std::string::size_type pos = str_ori.find(oldStr); pos != std::string::npos; pos = str_ori.find(oldStr)) 
	{
		// Replace the old string with the new string.
		str_ori = str_ori.substr(0, pos) + newStr + str_ori.substr(pos + oldStr.length());
    }
	return (str_ori);
}