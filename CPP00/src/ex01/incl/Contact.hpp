#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>

class Contact
{
private:
	std::string	name;
	std::string	surname;
	std::string	nick;
	std::string	phone_number;
	std::string secret;
public:
	Contact();
	~Contact();

	int		add_contact(Contact *contact);
	void	show_contact() const;
	void	list_contact() const;
};

#endif
