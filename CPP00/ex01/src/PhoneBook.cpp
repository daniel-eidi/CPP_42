#include <PhoneBook.hpp>

// Constructors
PhoneBook::PhoneBook()
{
	_index_pos = 0;
	//std::cout << "\e[0;33mDefault Constructor called of PhoneBook\e[0m" << std::endl;
}

// PhoneBook::PhoneBook(const PhoneBook &copy)
// {
// 	_index_pos = copy.getIndex_pos();
// 	_contact = copy.getContact();
// 	std::cout << "\e[0;33mCopy Constructor called of PhoneBook\e[0m" << std::endl;
// }

// PhoneBook::PhoneBook(int index_pos, Contact contact)
// {
// 	_index_pos = index_pos;
// 	_contact = contact;
// 	std::cout << "\e[0;33mFields Constructor called of PhoneBook\e[0m" << std::endl;
// }


// Destructor
PhoneBook::~PhoneBook()
{
	//std::cout << "\e[0;31mDestructor called of PhoneBook\e[0m" << std::endl;
}


// Operators
// PhoneBook & PhoneBook::operator=(const PhoneBook &assign)
// {
// 	_index_pos = assign.getIndex_pos();
// 	_contact = assign.getContact();
// 	return *this;
// }


// Getters / Setters
int PhoneBook::getIndex_pos() const
{
	return _index_pos;
}
void PhoneBook::setIndex_pos(int index_pos)
{
	_index_pos = index_pos;
}

// Contact PhoneBook::getContact() const
// {
// 	return _contact;
// }

// Other functions

void PhoneBook::add(void)
{	
	std::string s;

	std::cout << "First name" << std::endl;
	int pos = getIndex_pos();
	this->_contact[pos].setIndex(pos);
	std::getline(std::cin, s);
	this->_contact[pos].setFirstname(s);

	std::cout << "Last name" << std::endl;
	std::getline(std::cin, s);
	this->_contact[pos].setLastname(s);

	std::cout << "Nickname" << std::endl;
	std::getline(std::cin, s);
	this->_contact[pos].setNickname(s);

	std::cout << "Phonenumber" << std::endl;
	std::getline(std::cin, s);
	this->_contact[pos].setPhonenumber(s);

	std::cout << "Darkest secret" << std::endl;
	std::getline(std::cin, s);
	this->_contact[pos].setDarkestsecret(s);
	if (pos < 7)
		this->_index_pos++;
	else
		this->_index_pos = 0;
	std::cout << "============================\n" << std::endl;
}

std::string PhoneBook::truncate(std::string str, size_t width)
{
	std::string new_str;
	//int spaces = 0;
	// if (str.length() == width)
	// 	new_str = str;
	// else if (str.length() > width)
	// 	new_str = str.substr(0,9) + ".";
	// else
	// {
	// 	spaces = width - str.length() + 1;
	// 	while (--spaces)
	// 		new_str += " ";
	// 	new_str += str;
	// }
	if (str.length() > width)
		new_str = str.substr(0,width - 1) + ".";
	else
		new_str = str;
	return (new_str);
}

std::string PhoneBook::itoa(int num) 
{
    std::string str = "";
    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = -num;
    }
	if ( num == 0)
		str = '0';
    while (num > 0){
    str = char(num % 10 + '0') + str;
    num /= 10;
	}
    if (isNegative) {
        str = '-' + str;
    }
    return str;
}

void PhoneBook::search(void)
{
	int i = -1;
	std::string s;
	std::cout << std::setw(10);
	std::cout << truncate("Index", 10) ;
	std::cout << "|" ;
	std::cout << std::setw(10);
	std::cout << truncate("First Name", 10) ;
	std::cout << "|" ;
	std::cout << std::setw(10);
	std::cout << truncate("Last Name", 10);
	std::cout << "|" ;
	std::cout << std::setw(10);
	std::cout << truncate("Nickname", 10) << std::endl;
	while (++i < 8)
	{
		std::cout << std::setw(10);
		std::cout << itoa(i);
		std::cout << "|" ;
		display_contact(i);
	}
	std::cout << "Choose a contact by Index: " ;
	std::getline(std::cin, s);
	std::stringstream ss(s);
	ss >> i;
	if ( i > 7)
		std::cout << "Invalid index" << std::endl;
	else
	{
		std::cout << "==========================="<< std::endl;
		std::cout << "CONTACT INDEX : "<< i <<std::endl;
		std::cout << "==========================="<< std::endl;
		this->_contact[i].print();
	}
}

void PhoneBook::display_contact(int i)
{
	std::cout << std::setw(10);
	std::cout << truncate(this->_contact[i].getFirstname(), 10);
	std::cout << "|" ;
	std::cout << std::setw(10);
	std::cout << truncate(_contact[i].getLastname(), 10);
	std::cout << "|" ;
	std::cout << std::setw(10);
	std::cout << truncate(_contact[i].getNickname(), 10) << std::endl;
}