#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Constructor Cat" << std::endl;
}
Cat::~Cat()
{
	std::cout << "Destructor Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Cat" << std::endl;
	this->type = copy.type;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Assignment Cat" << std::endl;
	this->type = copy.type;
	return *this;
}

std::string Cat::getType() const
{
	return this->type;
}

void Cat::makeSound() const
{
	std::cout << "Meow~ Meow-" << std::endl;
}
