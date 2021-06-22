#include "phonebook.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::display_simple()
{
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
    std::string fields[11] = {
		"First Name : ",
		"Last Name : ",
		"Nickname : ",
		"Login : ",
		"Address : ",
		"E-mail : ",
		"Phone : ",
		"Birthday : ",
		"Favorite Meal : ",
		"Underwear Color : ",
		"Darkest Secret : "
	};

	for (int i=0; i < 11; i++)
    {
        std::cout << fields[i] << informations[i] << std::endl;
    }
}
