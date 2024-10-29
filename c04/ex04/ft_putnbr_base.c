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

int ft_base(char *base)
{
	int i;
	
	i = 0;	
	while (base[i] != '\0')
		i++;
	return (i);
}

void ft_putnbr_base(int nbr, char *base)
{
	int i;
	int b;

	b = ft_base(base);
	if (nbr < 0)
	{
        write(1, "-", 1);
        nbr = -nbr;
    }
	if (nbr > b)
	{
		ft_putnbr_base(nbr / b, base);
		ft_putnbr_base(nbr % b, base);
	}
	if(nbr == b)
	{
		write (1, &base[b - 1], 1);
	}
	if (nbr < b)
		write (1, &base[nbr % b], 1);
}

int main()
{
	int nbr = 12;
	char base[] = "putnbr";
	ft_putnbr_base(nbr, base);
}
