#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include <Weapon.hpp>

class HumanB
{
	public:
		// Constructors
		HumanB();
		HumanB(const HumanB &copy);
		HumanB( std::string name);
		
		// Destructor
		~HumanB();
		
		// Operators
		HumanB & operator=(const HumanB &assign);
		
		// Getters / Setters
		Weapon& getWeapon();
		void setWeapon(Weapon &weapon);
		std::string getName() const;
		void setName(std::string name);

		//METHOD
		void attack();
		
	private:
		Weapon *_weapon;
		std::string _name;
		
};

#endif