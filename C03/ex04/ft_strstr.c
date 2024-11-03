/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:57:31 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/28 15:57:37 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
			c++;
		if (to_find[c] == '\0')
		{
			c += 2;
			while(str[i + c] != '\n')
			{
				to_find[j] = str[i + c];
				j++;
				c++;
			}
			to_find[j] = '\0'; 
			return (to_find);
		}
		i++;
	}
	return (0);
}

int	main()
{
	char	str[] = "0: zero\n1: one\n2: two\n3: three\n4: four\n5: five\n6: six\n7: seven\n8: eight\n9: nine\n10: ten\n11: eleven\n12: twelve\n13: thirteen\n14: fourteen\n15: fifteen\n16: sixteen\n17: seventeen\n18: eighteen\n19: nineteen\n20: twenty\n30: thirty\n40: forty\n50: fifty\n60: sixty\n70: seventy\n80: eighty\n90: ninety\n100: hundred\n1000: thousand\n1000000: million\n1000000000: billion\n1000000000000: trillion\n1000000000000000: quadrillion\n1000000000000000000: quintillion\n1000000000000000000000: sextillion\n1000000000000000000000000: septillion\n1000000000000000000000000000: octillion\n1000000000000000000000000000000: nonillion\n1000000000000000000000000000000000: decillion\n1000000000000000000000000000000000000: undecillion";
	char	find[] = "100";
	printf("%s", ft_strstr(str, find));

}
