#include <iostream>
#include <string>

char    *stroupper(char *s)
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
    int i;

    i = 1;
    while (i < argc)
    {
        std::cout << stroupper(argv[i]) << std::endl;
        i++;
    }
    return (0);
}
