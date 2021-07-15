#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
		int count;
	public:
		Phonebook();
		~Phonebook();
		void add();
		void search();
};

#endif
