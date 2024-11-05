/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:00:53 by ecarbona          #+#    #+#             */
/*   Updated: 2024/11/05 19:00:54 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = argc - 1;
	while (n > 0)
	{
		while (argv[n][i] != '\0')
		{
			write (1, &argv[n][i], 1);
			i++;
		}
		n--;
		i = 0;
		write (1, "\n", 1);
	}
}