/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:46:34 by fcardi            #+#    #+#             */
/*   Updated: 2024/10/27 22:59:51 by fcardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_visibility(int *line, int clue)
{
	int	max_height;
	int	visible_count;
	int	i;

	max_height = 0;
	visible_count = 0;
	i = 0;
	while (i < 4)
	{
		if (line[i] > max_height)
		{
			max_height = line[i];
			visible_count++;
		}
		i++;
	}
	return (visible_count == clue);
}

int	first_check(int *temp, int **grid, int **clues)
{
	int	col;
	int	row;

	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			temp[row] = grid[row][col];
			row++;
		}
		if (!check_visibility(temp, clues[0][col]))
			return (0);
		row = 0;
		while (row < 4)
		{
			temp[row] = grid[3 - row][col];
			row++;
		}
		if (!check_visibility(temp, clues[1][col]))
			return (0);
		col++;
	}
	return (1);
}

int	second_check(int *temp, int **grid, int **clues)
{
	int	col;
	int	row;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			temp[col] = grid[row][col];
			col++;
		}
		if (!check_visibility(temp, clues[2][row]))
			return (0);
		col = 0;
		while (col < 4)
		{
			temp[col] = grid[row][3 - col];
			col++;
		}
		if (!check_visibility(temp, clues[3][row]))
			return (0);
		row++;
	}
	return (1);
}

int	check_clues(int **grid, int **clues)
{
	int	*temp;

	temp = (int *) malloc(4 * sizeof(int));
	if (!temp)
		return (0);
	if (first_check(temp, grid, clues) && second_check(temp, grid, clues))
	{
		free (temp);
		return (1);
	}
	else
	{
		free (temp);
		return (0);
	}
}
