/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:25:05 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/20 14:25:08 by ecarbona         ###   ########.fr       */
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
			if (e == '/')
			{
				e = 92;
			}
			else if (e == 92)
			{
				e = '/';
			}
			ft_putchar(e);
		}
		a++;
	}
}

void	swap(int x)
{
	int	a;

	a = 1;
	position(a, x, 92, '*');
	ft_putchar('\n');
}

void	print_riga(int x)
{
	int	a;

	a = 1;
	position(a, x, '/', '*');
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
		position(a, x, '*', ' ');
		ft_putchar('\n');
		b++;
	}
	if (y > 1)
	{
		swap(x);
	}
}

void	rush(int x, int y)
{
	print_riga(x);
	print_colonna(x, y);
}
