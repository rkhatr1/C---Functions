/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:12:07 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/18 23:14:16 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
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
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
