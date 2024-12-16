#include <iostream>
#include <string>
#include "incl/PhoneBook.hpp"

int	main(void)
{
	std::string	buffer;
	PhoneBook	phonebook;

	while (true)
	{
		std::getline(std::cin, buffer);
		std::cout << buffer << std::endl;

		if (!buffer.compare("ADD"))
		{
			std::cout << "Add command detected" << std::endl;
			phonebook.add_to_book(phonebook);
		}
		else if (!buffer.compare("SEARCH"))
		{
			std::cout << "Search command detected" << std::endl;
			phonebook.show_all_contacts(phonebook);
		}
		else if (!buffer.compare("EXIT"))
		{
			std::cout << "Exit command detected" << std::endl;
			break;
		}
		else
		{
			std::cout << buffer << ": invalid command" << std::endl;
		}
	}
}
