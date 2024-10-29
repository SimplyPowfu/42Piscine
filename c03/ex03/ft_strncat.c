/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:24:10 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/28 15:24:12 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	c;

	if (nb > 0)
	{
		c = 0;
		while (dest[c] != '\0')
		{
			c++;
			if (dest[c] == '\0')
			{
				i = 0;
				while (src[i] != '\0' && i <= nb - 1)
				{
					dest[c] = src[i];
					i++;
					c++;
				}
			}
		}
	}
	return (dest);
}
/*
int main()
{
	unsigned int nb = 4;
	char str[] = "Prima";
	char dest[] = "Seconda";
	printf("%s", ft_strcat(dest, str, nb));
	//printf("%s", strncat(dest, str, nb));
}
*/
