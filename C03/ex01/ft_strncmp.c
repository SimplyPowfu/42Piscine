/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:13:21 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/24 11:13:23 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	int r;
	unsigned n = 6;
	char str1[] = "Prova";
	char str2[] = "Prova";
	
	r = ft_strncmp(str1, str2, n);

	if(r == 0){
		printf("Le due stringhe sono identiche!\n");
	}else if(r < 0){
		printf("La prima stringa è minore della seconda stringa.\n");
	} else {
		printf("La seconda stringa è minore della prima stringa.\n");
	}
}*/
