/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:52:22 by ecarbona          #+#    #+#             */
/*   Updated: 2024/11/05 15:52:24 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (nb == 0 && power == 0)
		return (1);
	while (power > 1)
	{
		nb *= n;
		power--;
	}
	return (nb);
}
