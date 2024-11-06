/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:49:31 by ecarbona          #+#    #+#             */
/*   Updated: 2024/11/06 14:49:32 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

int	ft_strmat(char **str)
{
	int	i;
	int	n;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != NULL)
	{
		n = 0;
		while( str[i][n] != '\0')
		{
			n++;
			c++;
		}
		i++;
	}
	return (c);
}

void ft_concatenate(char **strs, char *join, char *sep, int size)
{
	int	n;
	int	c;
	int	i;

	i = 0;
	n = 0;
	c = 0;
	while (i < size)
	{
		n = 0;
		while (strs[i][n] != '\0')
		{
			join[c] = strs[i][n];
			n++;
			c++;
		}
		n = 0;
		while( sep[n] != '\0' && i < size - 1)
		{
			join[c] = sep[n];
			n++;
			c++;
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *join;

	if (size == 0)
        return malloc(1);
	join = (char *)malloc(((ft_strmat(strs) + ft_strlen(sep)) * size) * sizeof(char));
	ft_concatenate(strs, join, sep, size);
	return (join);
}

int	main()
{
	char *strs[] = {"prima", "seconda", "terza", "quarta"};
	char sep[] = " / ";
	int size = 4;
	printf("%s\n", ft_strjoin(size, strs, sep));
}