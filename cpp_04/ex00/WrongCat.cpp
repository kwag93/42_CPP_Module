#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Constructor WrongCat" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy WrongCat" << std::endl;
	this->type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "Assignment WrongCat" << std::endl;
	this->type = copy.type;
	return *this;
}

std::string WrongCat::getType() const
{
	return this->type;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow~ Meow-" << std::endl;
}
