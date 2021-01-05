/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:17:10 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/05 16:43:09 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_init_foption(t_foption *foption)
{
	foption->minus_flag = 0;
	foption->zero_flag = 0;
	foption->width = 0;
	foption->dot = 0;
	foption->precision_n = 0;
	foption->type = 0;
}

int ft_printf(const char *str, ...)
{
	va_list ap;
	t_foption foption;
	int print_cnt;
	char *strptr;

	ft_init_foption(&foption);
	va_start(ap, str);
	strptr = (char *)str;
	while(*strptr)
	{
		if (*strptr == '%')
			ft_option_cal(ap, &strptr, &foption, &print_cnt);
		else
		{
			ft_putchar(*strptr);
			print_cnt += 1;
			strptr++;
		}
	}
	va_end(ap);
	return (print_cnt);
}
