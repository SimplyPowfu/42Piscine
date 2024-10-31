/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:19:41 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/21 10:19:43 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	temp;

	i = 0;
	c = i + 1;
	while (i < size - 1)
	{
		if (tab[i] > tab[c])
		{
			temp = tab[i];
			tab[i] = tab[c];
			tab[c] = temp;
			i = 0;
			c = i + 1;
		}
		else
		{
			i++;
			c++;
		}
	}
}
