/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:27:47 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/20 14:27:49 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	position(int a, int x, char e, char s)
{
	while (a <= x)
	{
		if (a == 1)
		{
			ft_putchar(e);
		}
		else if (a < x)
		{
			ft_putchar(s);
		}
		else
		{
			if (e == 'A')
			{
				e = e + 2;
			}
			ft_putchar(e);
		}
		a++;
	}
}

void	print_riga(int x)
{
	int	a;

	a = 1;
	position(a, x, 'A', 'B');
	ft_putchar('\n');
}

void	print_colonna(int x, int y)
{
	int	a;
	int	b;

	b = 3;
	while (b <= y)
	{
		a = 1;
		position(a, x, 'B', ' ');
		ft_putchar('\n');
		b++;
	}
	if (y > 1)
	{
		print_riga(x);
	}
}

void	rush(int x, int y)
{
	print_riga(x);
	print_colonna(x, y);
}
