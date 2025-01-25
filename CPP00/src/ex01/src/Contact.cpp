#include "../incl/Contact.hpp"
#include<iostream>
#include <string>

Contact::Contact()
{
	std::cout << "Contact default constructor called" << std::endl;
}

Contact::~Contact()
{
}

static std::string string_normalizer(std::string str)
{
	std::string	ret;
	int	len;
	int	spaces;

	len = str.size();
	spaces = 0;
	if (len > 10)
	{
		str.resize(9);
		str.resize(10, '.');
		return (str);
	}
	else
	{
		spaces = 10 - len;
		while (spaces)
		{
			ret.append(" ");
			spaces--;
		}
		ret.append(str);
		return (ret);
	}
}

int Contact::add_contact(Contact* contact)
{
	std::string buffer;

	std::cout << "Name:         ";
	if (!std::getline(std::cin, buffer))
		return (-1);
	contact->name = buffer;

	std::cout << "Surname:      ";
	if (!std::getline(std::cin, buffer))
		return (-1);
	contact->surname = buffer;

	std::cout << "Nick:         ";
	if (!std::getline(std::cin, buffer))
		return (-1);
	contact->nick = buffer;

	std::cout << "Phone number: ";
	if (!std::getline(std::cin, buffer))
		return (-1);
	contact->phone_number = buffer;

	std::cout << "Secret:       ";
	if (!std::getline(std::cin, buffer))
		return (-1);
	contact->secret = buffer;

	std::cout << std::endl;
	return (0);
}

void Contact::list_contact() const
{
	std::cout << "|" << string_normalizer(name);
	std::cout << "|" << string_normalizer(surname);
	std::cout << "|" << string_normalizer(nick) << "|" << std::endl;

}


void Contact::show_contact() const
{
	std::cout << "Name:         " << name << std::endl;
	std::cout << "Surname:      " << surname << std::endl;
	std::cout << "Nick:         " << nick << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Secret:       " << secret << std::endl;
}
