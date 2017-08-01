/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:35:39 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/09 16:23:22 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int add;

	add = 0;
	if (nb > 2147483647 || nb < -2147483648)
	{
		return ;
	}
	if (nb == -2147483648)
	{
		nb = -2147483647;
		add = 1;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48 + add);
}
