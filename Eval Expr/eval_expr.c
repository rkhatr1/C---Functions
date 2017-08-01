/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 22:02:13 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/16 22:38:50 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr_lib.h"

int		eval_expr(char *str)
{
	int answer;

	answer = check_add_sub(&str);
	return (answer);
}

int		check_num(char **str)
{
	int		nb;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		nb = check_add_sub(str);
		if (**str == ')')
			(*str)++;
		return (nb);
	}
	return (ft_atoi(str));
}

int		check_mult_div_mod(char **str)
{
	int		num1;
	int		num2;
	char	index;

	num1 = check_num(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		index = **str;
		if (index != '*' && index != '/' && index != '%')
			return (num1);
		(*str)++;
		num2 = check_num(str);
		if (index == '*')
			num1 = (num1 * num2);
		else if (index == '/')
			num1 = (num1 / num2);
		else if (index == '%')
			num1 = (num1 % num2);
	}
	return (num1);
}

int		check_add_sub(char **str)
{
	int		num1;
	int		num2;
	char	index;

	num1 = check_mult_div_mod(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		index = **str;
		if (index != '+' && index != '-')
			return (num1);
		(*str)++;
		num2 = check_mult_div_mod(str);
		if (index == '+')
			num1 = (num1 + num2);
		else if (index == '-')
			num1 = (num1 - num2);
	}
	return (num1);
}
