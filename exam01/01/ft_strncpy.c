#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*risultato = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (risultato);
}
