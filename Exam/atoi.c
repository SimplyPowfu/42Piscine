#include <unistd.h>

int main()
{
    char str[] = "---1234";
    int i = 0;
    int atoi = 0;
    int min = 1;

    while(str[i] >= 9 && str[i] >= 13 || str[i] == 32)
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            min = -min;
        i++;
    }
    while(str[i] >= '0' || str[i] <= '9')
    {
        atoi = (atoi * 10) + (str[i] - 48);
        i++;
    }
    return (atoi * min);
}