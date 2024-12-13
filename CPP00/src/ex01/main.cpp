#include <iostream>
#include <string>
#include "incl/PhoneBook.hpp"
#include "incl/Contact.hpp"

int	main(void)
{
	std::string	buffer;
	Contact	contact;

	while (true)
	{
		std::getline(std::cin, buffer);
		std::cout << buffer << std::endl;

		if (!buffer.compare("ADD"))
		{
			std::cout << "Add command detected" << std::endl;
			contact.add_contact(&contact);
		}
		else if (!buffer.compare("SEARCH"))
		{
			std::cout << "Search command detected" << std::endl;
			contact.show_contact();
		}
		else if (!buffer.compare("EXIT"))
		{
			std::cout << "Exit command detected" << std::endl;
			break;
		}
		else
		{
			std::cout << buffer << std::endl;
			buffer.resize(9);
			buffer.resize(10, '.');
			std::cout << "Shortened: " << buffer << std::endl;
		}
	}
}
