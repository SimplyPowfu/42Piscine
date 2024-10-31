/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:26:36 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/29 16:26:37 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_print(int nbr, int b, char *base)
{
	if (nbr == b)
		write (1, &base[b], 1);
	if (nbr < b)
		write (1, &base[nbr % b], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b;

	b = ft_base(base);
	if (b >= 2 && ft_check(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			if (nbr == -2147483648)
			{
				ft_putnbr_base(-(nbr / b), base);
				ft_putnbr_base(-(nbr % b), base);
				return ;
			}
			nbr = -nbr;
		}
		if (nbr >= b)
		{
			ft_putnbr_base(nbr / b, base);
			ft_putnbr_base(nbr % b, base);
		}
		ft_print(nbr, b, base);
	}
}
/*
int main()
{
	int nbr = -2147483648;
	char base[] = "01";
	ft_putnbr_base(nbr, base);
}*/
