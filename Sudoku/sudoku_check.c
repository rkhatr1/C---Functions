/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:40:33 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/09 17:57:16 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "sudoku_helper.h"

void	print_grid(int grid[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(grid[i][j]);
			if (j < 8)
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		check_row_col(int k, int grid[9][9], int i, int j)
{
	int r;
	int c;

	r = 0;
	while (r < 9)
	{
		if (grid[i][r] == k)
		{
			return (0);
		}
		r++;
	}
	c = 0;
	while (c < 9)
	{
		if (grid[c][j] == k)
		{
			return (0);
		}
		c++;
	}
	return (1);
}

int		check_section(int k, int grid[9][9], int i, int j)
{
	int a;
	int b;

	a = i - (i % 3);
	b = j - (j % 3);
	i = a;
	while (i < a + 3)
	{
		j = b;
		while (j < b + 3)
		{
			if (grid[i][j] == k)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		sudoku_solver(int grid[9][9], int position)
{
	int i;
	int j;
	int k;

	if (position == 81)
		return (1);
	i = position / 9;
	j = position % 9;
	if (grid[i][j] != 0)
		return (sudoku_solver(grid, position + 1));
	k = 1;
	while (k <= 9)
	{
		if (check_row_col(k, grid, i, j) && check_section(k, grid, i, j))
		{
			grid[i][j] = k;
			if (sudoku_solver(grid, position + 1) == 1)
				return (1);
		}
		k++;
	}
	grid[i][j] = 0;
	return (0);
}
