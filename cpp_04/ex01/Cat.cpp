#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Constructor Cat" << std::endl;
}
Cat::~Cat()
{
	delete this->brain;
	std::cout << "Destructor Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Cat" << std::endl;
	this->type = copy.type;
	this->brain = copy.brain;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Assignment Cat" << std::endl;
	this->type = copy.type;
	this->brain = copy.brain;
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

Brain *Cat::getBrain() const
{
	return this->brain;
}
