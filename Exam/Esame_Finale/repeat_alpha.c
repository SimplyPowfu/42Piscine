#include <unistd.h>

int ft_count(char c)
{
    int i = 0;
    if(c >= 'a' && c <= 'z')
    {
        i = c - 96;
        return (i);
    }
    else if(c >= 'A' && c <= 'Z')
    {
        i = c - 40;
        return (i);
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        while(argv[1][i] != '\0')
        {
            int n = 1;
            while(n < ft_count(argv[1][i]))
            {
                write (1, &argv[1][i], 1);
                n++;
            }
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}