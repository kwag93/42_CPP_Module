#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : virtual public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &copy);
	std::string getType() const;
	void makeSound() const;
};

#endif
