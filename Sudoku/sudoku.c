/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:23:48 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/09 17:59:42 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "sudoku_helper.h"
#include "sudoku_check.h"

int		print_error(int c, char **v, int i, int j)
{
	if (c != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (i <= 9)
	{
		j = 0;
		while (v[i][j])
		{
			if (!(v[i][j] >= '1' && v[i][j] <= '9') && (v[i][j] != '.'))
			{
				write(1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		if (j != 9)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int grid[9][9];

	if (print_error(argc, argv, 1, 0) == 0)
		return (0);
	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] != '.')
				grid[i - 1][j] = (int)(argv[i][j] - 48);
			else
				grid[i - 1][j] = 0;
			j++;
		}
		i++;
	}
	if (sudoku_solver(grid, 0) == 1)
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	return (0);
}
