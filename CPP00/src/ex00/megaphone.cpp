#include <iostream>
#include <string>

std::string stroupper(std::string s)
{
    int i;

    i = 0;
    while (s[i])
    {
        s[i] = std::toupper(s[i]);
        i++;
    }
    return (s);
}

int main(int argc, char** argv)
{
    int         i;
    std::string input;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
        {
            input = argv[i];
            std::cout << stroupper(input);
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
