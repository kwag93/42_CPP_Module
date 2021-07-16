#include "contact.hpp"

Contact::Contact():index(-1)
{

}

Contact::~Contact()
{

}

void Contact::display_simple()
{
	if (this->index < 0)
		return;
	std::cout << "|" << std::setw(10) << index;
	for (int i=0; i < 3; i++)
    {
		std::cout << "|";
        if(informations[i].length() > 10)
        {
            std::cout << informations[i].substr(0, 9) << ".";
        }
        else
            std::cout << std::setw(10) << informations[i];
    }
	std::cout << "|" << std::endl;
}

void Contact::display()
{
	if (this->index < 0)
	{
		std::cout<<"----------No such index----------"<<std::endl;
		return;
    }
	std::string fields[5] = {
		"First Name : ",
		"Last Name : ",
		"Nickname : ",
		"Phone number: ",
		"Darkest Secret : "
	};
	std::cout << "|----------Detail Information for " << this->index << "---------|" << std::endl;
	for (int i=0; i < 5; i++)
    {
        std::cout << fields[i] << informations[i] << std::endl;
    }
	std::cout << "|-------------------------------------------|" << std::endl;
}

void Contact::add(int count)
{
	std::string fields[5] = {
		"First Name :",
		"Last Name :",
		"Nickname :",
		"Phone number:",
		"Darkest Secret :"
	};

	this->index = count % 8;
	for (int i=0; i<5; i++)
	{
		std::string data;
		std::cout << fields[i];
		std::getline(std::cin, data);
		this->informations[i] = data;
		std::cout << std::endl;
	}
}
