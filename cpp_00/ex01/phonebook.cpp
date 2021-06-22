
#include "phonebook.hpp"

void add(Contact contacts[], int count)
{
	std::string fields[11] = {
		"First Name :",
		"Last Name :",
		"Nickname :",
		"Login :",
		"Address :",
		"E-mail :",
		"Phone :",
		"Birthday :",
		"Favorite Meal :",
		"Underwear Color :",
		"Darkest Secret :"
	};

	if (count >= 8)
	{
		std::cout<<"This phonebook is full. Cannot save the new one."<<std::endl;
		return ;
	}
	contacts[count].index = count;
	for (int i=0; i<11; i++)
	{
		std::string data;
		std::cout << fields[i];
		std::getline(std::cin, data);
		contacts[count].informations[i] = data;
		std::cout << std::endl;
	}
}

void	show_search_header(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}


void search(Contact contacts[], int count)
{
	int number;

	show_search_header();
	for(int i = 0; i < count; i++)
	{
		contacts[i].display_simple();
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	while(1)
	{
		std::cout << "Index for details : ";
		std::cin >> number;
		std::cin.ignore();
		if(std::cin.fail())
		{
			std::cout<<"please enter integer number"<<std::endl;
			std::cin.clear();
			std::cin.ignore(50, '\n'); // cin 의 값을 버려준다
		}
		else
			break;
	}
	std::cout << "|----------Detail Information for " << number << "---------|" << std::endl;
	if (number < count)
		contacts[number].display();
	else
		std::cout << "No such index" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}


int main(void)
{
	Contact contacts[8];
	int count = 0;

	std::cout << "* Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
	while(1)
	{
		std::string command;
		std::cout<< ">>";
		std::getline(std::cin, command);

		if(!command.compare("ADD"))
		{
			add(contacts, count);
			count++;
		}
		else if (!command.compare("SEARCH"))
		{
			if (count == 0)
			{
				std::cout << "* Please add a contact before searching" << std::endl;
				continue;
			}
			search(contacts, count);
		}
		else if (!command.compare("EXIT"))
		{
			std::cout << "Bye." << std::endl;
			exit(0);
		}
	}
	return 0;
}
