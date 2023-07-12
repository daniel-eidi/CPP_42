#ifndef WrongCat_HPP
# define WrongCat_HPP

# include <iostream>
# include <string>
# include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
	public:
		// Constructors
		WrongCat();
		WrongCat(const WrongCat &copy);
		
		// Destructor
		~WrongCat();
		
		// Operators
		WrongCat & operator=(const WrongCat &assign);

		
		void makeSound(void) const;
		
	private:
		
};

#endif