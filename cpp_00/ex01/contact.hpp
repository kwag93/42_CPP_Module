#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
	private:
		int index;
		std::string			informations[5];
		enum Field {
			FirstName = 0,
			LastName,
			Nickname,
			Phonenumber,
			DarkestSecret
		};
	public:
		Contact();
		~Contact();
		void display_simple();
		void display();
		Contact &operator=(const Contact& op);
		void add(int count);
		void search(Contact contacts[], int count);
};

#endif
