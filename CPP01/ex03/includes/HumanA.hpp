#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include <Weapon.hpp>

class HumanA
{
	public:
		// Constructors
		HumanA();
		HumanA(const HumanA &copy);
		HumanA( std::string name, Weapon &weapon);
		
		// Destructor
		~HumanA();
		
		// Operators
		HumanA & operator=(const HumanA &assign);
		
		// Getters / Setters
		Weapon& getWeapon();
		void setWeapon(Weapon &weapon);
		std::string getName() const;
		void setName(std::string name);

		//METHOD
		void attack();
		
	private:
		Weapon &_weapon;
		std::string _name;
		
};

#endif