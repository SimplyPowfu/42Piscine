/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:14:51 by ecarbona          #+#    #+#             */
/*   Updated: 2024/11/06 10:14:52 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	char	*temp;
// copia   tipologia     grandezza + (+1 '\0') * grandezza in byte
	temp = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if(temp == NULL)
		return NULL; //se la locazione fallisce esci
	ft_strcpy(temp, src);
	return (temp);
}

int main()
{
	char src[] = "Origine";
}
