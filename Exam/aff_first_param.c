#include <unistd.h>

int ft_strleng(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        write (1, argv[1], ft_strleng(argv[1]));
    }
    write(1, "\n", 1);
    return (0);
}