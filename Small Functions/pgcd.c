/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:21:12 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/20 11:27:07 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		pgcd(int a, int b)
{
	int ret;

	if (b == 0)
		return (a);
	ret = pgcd(b, (a % b));
	return (ret);
}

int		main(int ac, char **av)
{
	int result;

	if (ac == 3)
	{
		result = pgcd(atoi(av[1]), atoi(av[2]));
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
