#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int i;
        
        i = 0;
        while (argv[argc - 1][i])
            i++;
        write(1, argv[argc - 1], i);
    }
    write(1, "\n", 1);
}