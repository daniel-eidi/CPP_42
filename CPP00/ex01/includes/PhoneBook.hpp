/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:19:29 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/03/31 10:19:30 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <Contact.hpp>
# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>
# include <iomanip>

class PhoneBook
{
	public:
		// Constructors
		PhoneBook();
		PhoneBook(const PhoneBook &copy);
		PhoneBook(int index_pos, Contact contact[8]);
		
		// Destructor
		~PhoneBook();
		
		// Operators
		PhoneBook & operator=(const PhoneBook &assign);

		//Methods
		void add();
		void search();
		
		// Getters / Setters
		int getIndex_pos() const;
		void setIndex_pos(int index_pos);

	private:
		int _index_pos;
		Contact _contact[8];
		std::string truncate(std::string str, size_t width);
		std::string itoa(int num);
		void display_contact(int i);
};

#endif