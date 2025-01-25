#include "../incl/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	this->act_pos = 0;
	std::cout << "Default constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_to_book(PhoneBook book)
{
	book.contact->add_contact(&this->contact[this->act_pos]);
	if (this->act_pos < 7)
		this->act_pos++;
	else
		this->act_pos = 0;
}

void	PhoneBook::show_all_contacts(PhoneBook book)
{
	int			i;
	std::string	buffer;

	i = 0;
	std::cout << "=============================================" << std::endl;
	std::cout << "|     index|      name|   surname|      nick|" << std::endl;
	std::cout << "=============================================" << std::endl;
	while (i < 8)
	{
		
		std::cout << "|         " << (i + 1);
		this->contact[i].list_contact();
		i++;
		std::cout << "---------------------------------------------" << std::endl;
	}

	std::cout << "Choose number (0 = back): ";
	std::getline(std::cin, buffer);
	if (buffer.find_first_not_of("0123456789") != std::string::npos || buffer.empty())
	{
		std::cout << "Invalid input! Only numerical characters allowed (0-8)!" << std::endl;
		return ;
	}
	i = std::atoi(buffer.c_str());//, NULL, 10);
	if (i == 0)
		return ;
	if (i < 0 || i > 8)
	{
		std::cout << "Invalid input! Only numbers 0-8 are acceptable." << std::endl;
		return ;
	}
	this->contact[i - 1].show_contact();
}
