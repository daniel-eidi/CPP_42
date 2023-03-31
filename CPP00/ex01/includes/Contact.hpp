#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	public:
		// Constructors
		Contact();
		Contact(const Contact &copy);
		Contact(int index, std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string darkestsecret);
		
		// Destructor
		~Contact();
		
		// Operators
		Contact & operator=(const Contact &assign);
		
		// Getters / Setters
		int getIndex() const;
		void setIndex(int index);
		std::string getFirstname() const;
		void setFirstname(std::string firstname);
		std::string getLastname() const;
		void setLastname(std::string lastname);
		std::string getNickname() const;
		void setNickname(std::string nickname);
		std::string getPhonenumber() const;
		void setPhonenumber(std::string phonenumber);
		std::string getDarkestsecret() const;
		void setDarkestsecret(std::string darkestsecret);

		void print(void);
		
	private:
		int			_index;
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darkestsecret;
		
};

#endif