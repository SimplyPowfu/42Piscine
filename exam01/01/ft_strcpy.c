#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*risultato = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (risultato);
}

/*int main()
{
	char src[] = "Prova";
	char dest[] = "test";
	printf("%s", ft_strcpy(dest, src));
}*/
