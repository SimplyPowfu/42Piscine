/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrapers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:06:18 by ecarbona          #+#    #+#             */
/*   Updated: 2024/10/27 21:20:17 by fcardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/* int grid[4][4];
int clues[4][4]; */

int	check_clues(int **grid, int **clues);

int	is_valid(int row, int col, int num, int **grid)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve_grid(int row, int col, int **grid, int **clues)
{
	int	num;

	if (row == 4)
		return (check_clues(grid, clues));
	if (col == 4)
		return (solve_grid(row + 1, 0, grid, clues));
	num = 1;
	while (num <= 4)
	{
		if (is_valid(row, col, num, grid))
		{
			grid[row][col] = num;
			if (solve_grid(row, col + 1, grid, clues))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	parse_and_init(char *input, int **grid, int **clues)
{
	int	i;
	int	row;
	int	col;

	i = 0;
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
			grid[row][col++] = 0;
		row++;
	}
	while (*input)
	{
		if (*input >= '1' && *input <= '4')
		{
			clues[i / 4][i % 4] = *input - '0';
			i++;
		}
		else if (*input != ' ')
			return (0);
		input++;
	}
	return (i == 16);
}
