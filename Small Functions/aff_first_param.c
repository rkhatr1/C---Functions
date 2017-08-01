/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 16:44:11 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/17 17:11:56 by rkhatri          ###   ########.fr       */
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
	if (argc < 2)
	{
		ft_putstr("\n");
		return (0);
	}
	else
	{
		ft_putstr(&argv[1][i]);
		ft_putstr("\n");
	}
	return (0);
}
