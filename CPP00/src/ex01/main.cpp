#include <iostream>
#include <string>
#include "incl/PhoneBook.hpp"

static void	start_message(void)
{
	std::cout << "Welcome to the Amazink Phonebook!" << std::endl;
	std::cout << "Available commands:" << std::endl;
	std::cout << "ADD -    add new contact" << std::endl;
	std::cout << "SEARCH - list contacts and display details" << std::endl;
	std::cout << "EXIT -   close program" << std::endl;
}

int	main(void)
{
	std::string	buffer;
	PhoneBook	phonebook;

	start_message();
	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, buffer);
		if (!buffer.compare("ADD"))
			phonebook.add_to_book(phonebook);
		else if (!buffer.compare("SEARCH"))
			phonebook.show_all_contacts(phonebook);
		else if (!buffer.compare("EXIT"))
			break;
		else
			std::cout << buffer << ": invalid command" << std::endl;
	}
}
