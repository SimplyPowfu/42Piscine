/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:22:53 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/29 15:22:55 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	c;
	int	atoi;
	int min;

	i = 0;
	c = 0;
	atoi = 0;
	min = 1;
	while (str[i] != '\0' && c == 0)
	{
		if(str[i] == '-')
		{
			min = -min;
		}
		while (str[i + c] >= '1' && str[i + c] <= '9')
		{
			atoi = ((atoi * 10) + (str[i + c] - 48)); 
			c++;
		}
		i++;
	}
	return (atoi * min);
}

int	main()
{
	char str[] = "---+--+1234ab";
	printf("%d", ft_atoi(str));
}
