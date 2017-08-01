/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:26:34 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/19 17:17:48 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	long result;
	int i;
	int sign;

	result = 0;
	sign = 0;
	i = 0;
	while (str[i] && (str[i] == '\n' || str[i] == ' ' || str[i] == '\t' ||
				str[i] == '\f' || str[i] == '\v' || str[i] == '\r'))
			i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i]) && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (sign == 1)
		return (-1 * result);
	else
		return (result);
}

int		main(int ac, char **av)
{
	int	res;

	res = ft_atoi(av[1]);
	printf("%d", res);
	return (0);
}
