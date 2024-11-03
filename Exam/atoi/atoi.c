/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:36:47 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/31 11:36:49 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	atoi;
	int	min;

	i = 0;
	atoi = 0;
	min = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			min = -min;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = ((atoi * 10) + (str[i] - 48));
		i++;
	}
	return (atoi * min);
}

int	main()
{
	char str[] = "-123abc456";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
}