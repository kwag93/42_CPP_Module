#include "contact.hpp"
#include "phonebook.hpp"

int main(void)
{
	Phonebook phonebook;

	std::cout << "* Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
	while(!std::cin.eof())
	{
		std::string command;
		std::cout<< ">>";
		std::cin>>command;
		std::cin.ignore();

		if(!command.compare("ADD"))
		{
			phonebook.add();
		}
		else if (!command.compare("SEARCH"))
		{
			phonebook.search();
		}
		else if (!command.compare("EXIT"))
		{
			std::cout << "Bye." << std::endl;
			exit(0);
		}
	}
	return 0;
}
