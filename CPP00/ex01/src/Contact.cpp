#include "Contact.hpp"

// Constructors
Contact::Contact()
{
	_firstname = """";
	_lastname = """";
	_nickname = """";
	_phonenumber = """";
	_darkestsecret = """";
	//std::cout << "\e[0;33mDefault Constructor called of Contact\e[0m" << std::endl;
}

Contact::Contact(const Contact &copy)
{
	_firstname = copy.getFirstname();
	_lastname = copy.getLastname();
	_nickname = copy.getNickname();
	_phonenumber = copy.getPhonenumber();
	_darkestsecret = copy.getDarkestsecret();
	//std::cout << "\e[0;33mCopy Constructor called of Contact\e[0m" << std::endl;
}

Contact::Contact(int index, std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string darkestsecret)
{
	_index = index;
	_firstname = firstname;
	_lastname = lastname;
	_nickname = nickname;
	_phonenumber = phonenumber;
	_darkestsecret = darkestsecret;
	//std::cout << "\e[0;33mFields Constructor called of Contact\e[0m" << std::endl;
}


// Destructor
Contact::~Contact()
{
	//std::cout << "\e[0;31mDestructor called of Contact\e[0m" << std::endl;
}


// Operators
Contact &Contact::operator=(const Contact &assign)
{
	_index = assign.getIndex();
	_firstname = assign.getFirstname();
	_lastname = assign.getLastname();
	_nickname = assign.getNickname();
	_phonenumber = assign.getPhonenumber();
	_darkestsecret = assign.getDarkestsecret();
	return *this;
}


// Getters / Setters
int Contact::getIndex() const
{
	return _index;
}
void Contact::setIndex(int index)
{
	_index = index;
}
std::string Contact::getFirstname() const
{
	return _firstname;
}
void Contact::setFirstname(std::string firstname)
{
	_firstname = firstname;
}

std::string Contact::getLastname() const
{
	return _lastname;
}
void Contact::setLastname(std::string lastname)
{
	_lastname = lastname;
}

std::string Contact::getNickname() const
{
	return _nickname;
}
void Contact::setNickname(std::string nickname)
{
	_nickname = nickname;
}

std::string Contact::getPhonenumber() const
{
	return _phonenumber;
}
void Contact::setPhonenumber(std::string phonenumber)
{
	_phonenumber = phonenumber;
}

std::string Contact::getDarkestsecret() const
{
	return _darkestsecret;
}
void Contact::setDarkestsecret(std::string darkestsecret)
{
	_darkestsecret = darkestsecret;
}


void Contact::print(void)
{
	std::cout <<"First Name: ";
	std::cout << "\t\t" << this->_firstname << std::endl;
	std::cout <<"Last Name: ";
	std::cout << "\t\t" << this->_lastname << std::endl;
	std::cout <<"Nickname: ";
	std::cout << "\t\t" << this->_nickname << std::endl;
	std::cout <<"Phone Number: ";
	std::cout << "\t\t" << this->_phonenumber << std::endl;
	std::cout <<"Darkest Secret: ";
	std::cout << "\t" << this->_darkestsecret << std::endl;
	std::cout << "============================" << std::endl  << std::endl;
}
