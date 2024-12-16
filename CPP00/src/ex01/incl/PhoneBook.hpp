#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contact[8];
	int	act_pos;

public:
	PhoneBook();
	~PhoneBook();

	void	add_to_book(PhoneBook book);
	void	show_all_contacts(PhoneBook book);
	int		get_position(PhoneBook book);
};

#endif
