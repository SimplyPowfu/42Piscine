#include <unistd.h>

void printnbr (int n)
{
	if (n >= 10)
		printnbr(n / 10);
	n = (n % 10 + '0');
	write(1, &n, 1);
}

int main()
{
    int nbr = 1;
    char c;
    while(nbr <= 100)
    {
        if ((nbr % 5 == 0) && (nbr % 3 == 0))
			write(1, "fizzbuzz", 8);
		else if (nbr % 3 == 0)
			write (1, "fizz", 4);
		else if (nbr % 5 == 0)
			write (1, "buzz", 4);
		else 
			printnbr(nbr);
		write (1, "\n", 1);
		nbr++;
    }
}