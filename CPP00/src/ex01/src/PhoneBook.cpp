#include "../incl/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	this->act_pos = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_to_book(PhoneBook book)
{
	book.contact->add_contact(&this->contact[this->act_pos]);
	if (this->act_pos < 8)
		this->act_pos++;
	else
		this->act_pos = 0;
}

void	PhoneBook::show_all_contacts(PhoneBook book)
{
	int	i;

	i = 0;
	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|index     |name      |surname   |nick      |" << std::endl;
	while (i < 8)
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|" << (i + 1) << "         ";
		this->contact[i].list_contact();
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}