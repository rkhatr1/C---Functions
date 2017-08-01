/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 10:10:31 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/20 13:02:27 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int		main(int ac, char **av)
{
	int num;

	ft_putnbr(ac);
    return (0);
}
