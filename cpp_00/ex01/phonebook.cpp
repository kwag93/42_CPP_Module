
#include "phonebook.hpp"

Phonebook::Phonebook():count(0)
{

}

Phonebook::~Phonebook()
{

}

void Phonebook::add()
{
	if(this->count < 8)
	{
		this->contacts[this->count].add(this->count);
		this->count++;
	}
	else
	{
		this->contacts[this->count % 8].add(this->count);
		this->count++;
	}
}


void	show_search_header(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}


void Phonebook::search()
{
	int number;

	if (this->count == 0)
	{
		std::cout << "* Please add a contact before searching" << std::endl;
		return;
	}
	show_search_header();
	for(int i = 0; i < 8; i++)
	{
		this->contacts[i].display_simple();
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
	if(this->count < 8)
	{
		if(number >=0 && number < 8)
			this->contacts[number].display();
		else
			std::cout<<"----------No such index----------"<<std::endl;
	}
	else
	{
		if(number < 0 || number >= 8)
			std::cout<<"----------No such index----------"<<std::endl;
		else
			this->contacts[number % 8].display();
	}
}
