#include <stdio.h>

int repeat_alpha(char *str)
{
	int i;
	int l;
	
	if(str[i] >= 'a' && str[i] <= 'z')
	{
			l = str[i] -96;
	}
	else if(str[i] >= 'A' && str[i] <= 'Z')
	{
			l = str[i] -64;
	}
	return (l);
}

int main (int argc, char **argv)
{
	int loop;
	int i = 0;
	if (argc == 2)
	{
		while(*argc[1])
		{
			loop = repeat_alpha(argv[1]);
			while(i < loop)
			{
				printf("%s", argv[1]);
			}
		}
	}
	printf("\n");
}
