/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 21:23:30 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/19 21:31:01 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int div;
	int oct;

	div = 128;
	oct = octet;
	while (div != oct)
	{
		if (div <= oct)
		{
			oct = oct % div;
			write(1, "1", 1);
		}
		else
		{
			write(1, "0", 1);
			div = div/2;
		}
	}
}

int		main(int ac, char **av)
{
	printf(print_bits('2'));
	return (0);
}
