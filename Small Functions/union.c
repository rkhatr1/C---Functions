/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 21:33:51 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/19 21:54:24 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char s1, char s2)
{
	int i;

	i = 0;
	while (s1 != '\0')
	{
		
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);	
	}
	write(1, "\n", 1);
	return (0);
}
