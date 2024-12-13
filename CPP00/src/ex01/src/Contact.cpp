#include "../incl/Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

int Contact::add_contact(Contact* contact)
{
	std::string buffer;

	std::cout << "Name: ";
	if (!std::getline(std::cin, buffer))
		return (-1);
	contact->name = buffer;

	std::cout << std::endl << "Surname: ";
	if (!std::getline(std::cin, buffer))
		return (-1);
	contact->surname = buffer;

	std::cout << std::endl << "Nick: ";
	if (!std::getline(std::cin, buffer))
		return (-1);
	contact->nick = buffer;

	std::cout << std::endl << "Phone number: ";
	if (!std::getline(std::cin, buffer))
		return (-1);
	contact->phone_number = buffer;

	std::cout << std::endl << "Secret: ";
	if (!std::getline(std::cin, buffer))
		return (-1);
	contact->secret = buffer;

	std::cout << std::endl;
	return (0);
}

void Contact::show_contact() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Surname: " << surname << std::endl;
	std::cout << "Nick: " << nick << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Secret: " << secret << std::endl;
}
