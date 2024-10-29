/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:36:24 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/24 10:36:26 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (s2[c] != '\0')
	{
		c++;
	}
	while (s1[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (i - c);
}
/*
int	main()
{
	int r;
	char str1[] = "Prova";
	char str2[] = "ProvA";
	
	r = strcmp(str1, str2);

	if(r == 0){
		printf("Le due stringhe sono identiche!\n");
	}else if(r < 0){
		printf("La prima stringa è minore della seconda stringa.\n");
	} else {
		printf("La seconda stringa è minore della prima stringa.\n");
	}
}*/
