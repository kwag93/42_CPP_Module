#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Constructor Dog" << std::endl;
}
Dog::~Dog()
{
	delete this->brain;
	std::cout << "Destructor Dog" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy Dog" << std::endl;
	this->type = copy.type;
	delete brain;
	this->brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Assignment Dog" << std::endl;
	this->type = copy.type;
	delete brain;
	this->brain = new Brain(*copy.brain);
	return *this;
}

std::string Dog::getType() const
{
	return this->type;
}

void Dog::makeSound() const
{
	std::cout << "Bow wow!" << std::endl;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}
