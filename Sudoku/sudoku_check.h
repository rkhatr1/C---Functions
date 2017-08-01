/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_check.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 16:37:44 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/09 16:44:57 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_CHECK_H
# define SUDOKU_CHECK_H

void	print_grid(int grid[9][9]);
int		check_row_col(int k, int grid[9][9], int i, int j);
int		check_section(int k, int grid[9][9], int i, int j);
int		sudoku_solver(int grid[9][9], int position);

#endif
