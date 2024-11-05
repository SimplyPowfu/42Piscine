/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:57:31 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/28 15:57:37 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
			c++;
		if (to_find[c] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "eliminaCOPIAelimina";
	char	find[] = "P";
	printf("%s", ft_strstr(str, find));
	
}*/
