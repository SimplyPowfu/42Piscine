/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:53:13 by ecarbona          #+#    #+#             */
/*   Updated: 2024/11/05 15:53:15 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power > 1)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
