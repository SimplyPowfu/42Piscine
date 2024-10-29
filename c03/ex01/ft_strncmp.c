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

int	ft_strcmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
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
	return (0);
}

int	main()
{
	int r;
	unsigned n = 4;
	char str1[] = "ProvA";
	char str2[] = "Prova";
	
	r = ft_strcmp(str1, str2, n);

	if(r == 0){
		printf("Le due stringhe sono identiche!\n");
	}else if(r < 0){
		printf("La prima stringa è minore della seconda stringa.\n");
	} else {
		printf("La seconda stringa è minore della prima stringa.\n");
	}
}
