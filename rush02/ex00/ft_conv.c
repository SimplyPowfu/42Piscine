#include <stdio.h>
#include <unistd.h>

//char buffer[] = "0: zero\n1: one\n2: two\n3: three\n4: four\n5: five\n6: six\n7: seven\n8: eight\n9: nine\n10: ten\n11: eleven\n12: twelve\n13: thirteen\n14: fourteen\n15: fifteen\n16: sixteen\n17: seventeen\n18: eighteen\n19: nineteen\n20: twenty\n30: thirty\n40: forty\n50: fifty\n60: sixty\n70: seventy\n80: eighty\n90: ninety\n100: hundred\n1000: thousand\n1000000: million\n1000000000: billion\n1000000000000: trillion\n1000000000000000: quadrillion\n1000000000000000000: quintillion\n1000000000000000000000: sextillion\n1000000000000000000000000: septillion\n1000000000000000000000000000: octillion\n1000000000000000000000000000000: nonillion\n1000000000000000000000000000000000: decillion\n1000000000000000000000000000000000000: undecillion";

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;
	int	j = 0;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
			c++;
		if (to_find[c] == '\0')
		{
			c += 2;
			while(str[i + c] != '\n')
			{
				to_find[j] = str[i + c];
				j++;
				c++;
			}
			to_find[j] = '\0';
			return (to_find);
		}
		i++;
	}
	return (0);
}

void ft_brutal(int len) {
	int i = 0; 
	char dest[len + 1];
	dest[0] = '1';
	
	i = 1;
	while (i < len) {
		dest[i] = '0';
		i++;
	}
	dest[len] = '\0';
	printf("%s ", ft_strstr(buffer, dest));
}

char *ft_charstr(char *str, char to_find)
{
	static char dest[50];
	int i = 0;
	int c = 0;

	while (str[i] != '\0') {
		if (str[i] == to_find) {
			while (str[i] != '\n' && str[i] != '\0')
			{
				if(str[i] >= 'a' && str[i] <= 'z')
				{
					dest[c] = str[i];
					c++;
				}
				i++;
			}
			dest[c] = '\0';
			return dest;
		}
		i++;
	}
	return NULL;
}

void ft_putDex(char *str)
{
	char copy[1];
	char *result;
	int	i = 0;
	if (str[i] >= '2' && str[i + 1] != '0')
	{
		copy[0] = str[i + 1];
		str[i + 1] = '0'; 
		printf("%s ", ft_strstr(buffer, str));
		printf("%s", result = ft_charstr(buffer, copy[0]));
	}
	else
	{
		if(str[i] != '0')
		{
			printf("%s", ft_strstr(buffer, str));
		}
		else
		{
			printf("%s", result = ft_charstr(buffer, str[i + 1]));
		}
	}
}

void ft_checkIn(char *str) {
    int len = 0;
    char *result;

    while (str[len] != '\0')
        len++;

    if (len == 1) {
        printf("%s", ft_charstr(buffer, str[0]));
    } else if (len == 2) {
        ft_putDex(str);
    } else if (len > 2) {
        result = ft_charstr(buffer, str[0]);
        if (result) {
            printf("%s hundred", result);
            if (str[1] != '0' || str[2] != '0') {
                printf(" ");
            }
        }
        if (str[1] != '0' || str[2] != '0') {
            ft_putDex(&str[1]);
        }
    }
}
/*
int main() {
	char str[] = "999";
	ft_checkIn(str);
	printf("\n");
}*/