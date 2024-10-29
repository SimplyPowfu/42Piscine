/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:01:34 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/21 10:01:36 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	app;
	int	i;

	i = 0;
	while (i < size)
	{
		size--;
		app = tab[i];
		tab[i] = tab[size];
		tab[size] = app;
		i++;
	}
}
