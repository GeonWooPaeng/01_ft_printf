/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:17:31 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/05 21:45:22 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct	s_format_option
{
	int minus_flag;
	int zero_flag;
	int width;
	int dot;
	int precision_n;
	int type;
	int print_len
}				t_foption;

int ft_printf(const char *str, ...);
void ft_option_cal(va_list ap, char **str, t_foption *foption);
void ft_print_check(va_list ap, t_foption *foption);
int ft_print_c(va_list ap, t_foption *foption);
void	ft_putchar(char c);
void ft_init_foption(t_foption *foption);

#endif