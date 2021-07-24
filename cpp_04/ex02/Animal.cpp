#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Constructor Animal" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Destructor Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Animal" << std::endl;
	this->type = copy.type;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Assignment Animal" << std::endl;
	this->type = copy.type;
	return *this;
}
