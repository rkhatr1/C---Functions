/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:18:48 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/19 17:26:37 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	char c;
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[j])
		j++;
	while (i < (j - 1))
	{
		c = str[j];
		str[j] = str[i];
		str[i] = c;
		i++;
		j--;
	}
	return (str);
}

int		main(int ac, char **av)
{
	char result;

	result = *ft_strrev(av[1]);
	printf("%c", result);
	return (0);
}
