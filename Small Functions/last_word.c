/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 19:40:13 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/19 20:48:55 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int f_index;
	int l_index;

	f_index = 0;
	l_index = 0;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
			i--;
		l_index = i;
		while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
			i--;
		f_index = i + 1;
		while (f_index <= l_index)
		{
			write(1, &av[1][f_index], 1);
			f_index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
