/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:53:43 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/17 14:01:49 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int n)
{
	char	d;
	char	u;

	d = (n / 10) + 48;
	u = (n % 10) + 48;
	write (1, &d, 1);
	write (1, &u, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a);
			write (1, " ", 1);
			ft_print (b);
			b++;
			if (a != 98)
			{
				write(1, ", ", 2);
			}
		}
		a++;
	}
}
