#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
	public:
		int index;
		std::string			informations[11];
		enum Field {
			FirstName = 0,
			LastName,
			Nickname,
			Login,
			Address,
			Email,
			Phone,
			Birthday,
			FavoriteMeal,
			UnderwearColor,
			Secret
		};
		Contact();
		~Contact();
		void display_simple();
		void display();
		Contact &operator=(const Contact& op);
};

#endif
