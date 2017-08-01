/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 15:44:44 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/19 16:03:33 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] > 'm' || str[i] < 'n')
				ft_putchar('m' - (str[i] - 'n'));
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] > 'M' || str[i] < 'N')
				ft_putchar('M' - (str[i] - 'N'));
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		alpha_mirror(av[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
