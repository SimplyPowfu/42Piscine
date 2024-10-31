/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:43:41 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/29 10:43:43 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				c;
	unsigned int	a;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	a = c;
	while (src[i] != '\0' )
	{
		if (a < size)
			dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (i + c);
}
/*
int main()
{
	char src[] = "Mario";
	char dest[20] = "Ciao ";

	unsigned int size = 3;
   	printf("%d\n", ft_strlcat(dest, src, size));
	printf("%s", dest);
}*/
