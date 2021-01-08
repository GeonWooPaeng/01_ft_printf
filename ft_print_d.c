/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:12:01 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/08 14:33:58 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_dnspace(long long num, t_foption *foption)
{
	if (num == 0 && foption->dot && foption->precision_n < 1)
		return ;
	if (num > 9)
		ft_dnspace(num / 10, foption);
	ft_putchar(num % 10 + '0', foption);
}

static int ft_dlen(long long num, t_foption *foption)
{
	int cnt;

	cnt = 0;
	if (num == 0)
		return (1);
	if (num == 0 && foption->dot && foption->precision_n < 1)
		return (0);
	while (num > 0)
	{
		num /= 10;
		cnt += 1;
	}
	return (cnt);
}

static void ft_dspace(t_foption *foption, int num, int *nlen)
{
	int space;

	space = 0;
	if (foption->precision_n > *nlen) //zero가 있는 곳
		space = foption->width - foption->precision_n;
	else
		space = foption->width - *nlen;
	space = num < 0 ? space - 1: space;
	if (foption->zero_flag && !foption->dot && foption->precision_n < 1)
		space -= foption->width - *nlen;
	while (space-- > 0)
		ft_putchar(' ', foption);
}

static void ft_zero(t_foption *foption, int *nlen)
{
	int zlen;

	if (foption->zero_flag && !foption->dot && foption->precision_n < 1)
		zlen = foption->width - *nlen;
	else
		zlen = foption->precision_n - *nlen;
	while (zlen-- > 0)
		ft_putchar('0', foption);
}

void ft_print_d(va_list ap, t_foption *foption)
{
	int num;
	int nlen;

	num = va_arg(ap, int);
	nlen = (num < 0) ? ft_dlen(-num, foption) : ft_dlen(num, foption);
	(foption->minus_flag) ? 0 : ft_dspace(foption, num, &nlen);
	num < 0 ? ft_putchar('-', foption) : 0;
	ft_zero(foption, &nlen);
	num < 0 ? ft_dnspace(-num, foption) : ft_dnspace(num, foption);
	foption->minus_flag = (foption->minus_flag) ? 0 : 1;
	(foption->minus_flag) ? 0 : ft_dspace(foption, num, &nlen);
}