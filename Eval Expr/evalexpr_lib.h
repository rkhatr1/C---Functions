/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr_lib.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 22:12:16 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/16 22:38:41 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXPR_LIB_H
# define EVALEXPR_LIB_H

int		eval_expr(char *str);
int		check_num(char **str);
int		check_mult_div_mod(char **str);
int		check_add_sub(char **str);
void	ft_putchar(char c);
void	ft_putnbr(int num);
void	ft_putstr(char *str);
int		ft_atoi(char **str);

#endif
