/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:32:16 by fcardi            #+#    #+#             */
/*   Updated: 2024/10/27 21:03:01 by fcardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int num = valore da radicizzare e int i = alla radice di num

int	calcolaradice(int num, int i)
{
	int	set;

	set = 1;
	if (num < 0)
		return (-1);
	while (i * i <= num)
	{
		if (i * i == num)
		{
			set = i;
		}
		else
		{
			set = -1;
		}
		i++;
	}
	return (set);
}

int	ft_check_n(char *str, int n)
{
	if (n < 0 || (calcolaradice(n, 1) < 0 || calcolaradice(n, 1) > 9))
		return (-1);
	while (*str)
	{
		if ((int)(*(str++) - 48) > n)
			return (-1);
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	ft_checkinput(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!(*str <= '9' && *str >= '0'))
		return (-1);
	while (i < ft_strlen(str))
	{
		if (!((str[i] <= '9' && str[i] >= '0')) && i % 2 == 0)
			return (-1);
		if ((str[i] != 32) && (i % 2 != 0) && (i > 0))
			return (-1);
		count++;
		i++;
	}
	if (str[i - 1] == 32 && ((i - 1) % 2 != 0))
		return (-1);
	if (ft_check_n(str, ((count + 1) / 2)) < 0)
		return (-1);
	return ((count + 1) / 2);
}
