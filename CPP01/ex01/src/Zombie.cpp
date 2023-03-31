#include "Zombie.hpp"

// Constructors

Zombie::Zombie()
{
	_name = """";
	
	std::cout << "\e[0;33mDefault Constructor called of Zombie\e[0m" << std::endl;
}

Zombie::Zombie(const Zombie &copy)
{
	_name = copy.getName();
	std::cout << "\e[0;33mCopy Constructor called of Zombie\e[0m" << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	
	// std::cout << "\e[0;33mFields Constructor called of Contact\e[0m" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Destructor
Zombie::~Zombie()
{
	std::cout << _name << ": Destroyed" << std::endl;
}


// Getters / Setters
std::string Zombie::getName() const
{
	return (_name);
}
void Zombie::setName(std::string name)
{
	_name = name;
}

Zombie* newZombie( std::string name )
{
	return (new Zombie(name));
}

void randomChump( std::string name )
{
	Zombie random=Zombie(name);
	random.announce();
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombiehorde = new Zombie[N];
	int i = -1;
	while (++i < N)
		zombiehorde[i].setName(name);
	return(zombiehorde);
}