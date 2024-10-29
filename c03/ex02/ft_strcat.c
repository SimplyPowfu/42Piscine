/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:08:17 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/24 12:08:18 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
		if (dest[c] == '\0')
		{
			i = 0;
			while (src[i] != '\0')
			{
				dest[c] = src[i];
				i++;
				c++;
			}
		}
	}
	return (dest);
}
/*
int main()
{
	char str[] = "Prima";
	char dest[20] = "Seconda";
	printf("%s", ft_strcat(dest, str));
	//printf("%s", strcat(dest, str));
}
*/
