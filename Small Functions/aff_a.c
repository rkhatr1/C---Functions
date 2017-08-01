/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:52:15 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/17 16:23:24 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putstr("a");
		return (0);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				ft_putstr("a");
			}
			i++;
		}
	}
	ft_putstr("\n");
	return (0);
}
