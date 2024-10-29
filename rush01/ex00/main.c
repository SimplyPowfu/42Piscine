/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:44:43 by fcardi            #+#    #+#             */
/*   Updated: 2024/10/27 23:03:11 by fcardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	parse_and_init(char *input, int **grid, int **clues);
int	solve_grid(int row, int col, int **grid, int **clues);
int	ft_checkinput(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_grid(int **grid)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(grid[row][col] + '0');
			if (col < 3)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	**ft_init(void)
{
	int	**ptr;
	int	i;

	i = 0;
	ptr = (int **) malloc(4 * sizeof(int));
	if (!ptr)
		return (NULL);
	while (i < 4)
		ptr[i++] = (int *) malloc(4 * sizeof(int));
	return (ptr);
}

int	main(int argc, char **argv)
{
	int	**grid;
	int	**clues;

	if (argc != 2 || ft_checkinput(argv[1]) < 0)
		return (write(1, "Error\n", 6));
	grid = ft_init();
	clues = ft_init();
	if (!grid || !clues || !parse_and_init(argv[1], grid, clues))
		return (write(1, "Error\n", 6));
	if (solve_grid(0, 0, grid, clues))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	free(grid);
	free(clues);
	return (0);
}
