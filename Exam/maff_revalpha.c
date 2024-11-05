#include <unistd.h>

int main()
{
    char c;

    c = 'Z';

    while(c >= 'a' || c >= 'A')
    {
        if (c >= 'A' && c <= 'Z')
        {
            c += 32;
            write(1, &c, 1);
        }
        else if(c >= 'a' && c <= 'z')
        {
            c -= 32;
            write(1, &c, 1);
        }
        c--;
    }
    write(1, "\n", 1);
}