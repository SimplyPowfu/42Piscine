/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:12:26 by ecarbona          #+#    #+#             */
/*   Updated: 2024/11/06 11:12:27 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int	i;
	int *range;

	if(min >= max)
	{
		return NULL;
	}
	range = (int *)malloc((max - min) * sizeof(int));
	if (range == NULL)
	{
        	return NULL;
	}
	i = 0;
	while(min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
