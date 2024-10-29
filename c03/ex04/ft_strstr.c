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
	if(to_find[i] != '\0')
	{
		while(str[i] != '\0')
		{
			if(str[i] == to_find[c])
			{
				c++;
			}
			i++;
		}
	}
	return (str);
}

int	main()
{
	char	str[] = "eliminaCOPIAelimina";
	char	find[] = "CoPia";
	printf("%s", strstr(str, find));
	
}
