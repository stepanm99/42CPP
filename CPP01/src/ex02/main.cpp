#include <string>
#include <iostream>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "Address of string:    " << &string
		<< " value: " << string << std::endl;
	std::cout << "Address of stringPTR: " << &stringPTR
		<< " value: " << stringPTR << std::endl;
	std::cout << "Address of stringREF: " << &stringREF
		<< " value: " << stringREF << std::endl;

	return (0);
}
