/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 20:55:21 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/20 21:15:55 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 65;
			while (j >= 0)
			{
				write(1, &str[i], 1);
				j--;
			}
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 97;
			while (j >= 0)
			{
				write(1, &str[i], 1);
				j--;
			}
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	return (0);
}
