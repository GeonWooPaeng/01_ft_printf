/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:37:29 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/08 16:49:19 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_inspace(long long num, t_fopt *fopt)
{
	if (num == 0 && fopt->dot && fopt->nprec < 1)
		return ;
	if (num > 9)
		ft_inspace(num / 10, fopt);
	ft_putchar(num % 10 + '0', fopt);
}

static int ft_ilen(long long num, t_fopt *fopt)
{
	int cnt;

	cnt = 0;
	if (num == 0)
		return (1);
	if (num == 0 && fopt->dot && fopt->nprec < 1)
		return (0);
	while (num > 0)
	{
		num /= 10;
		cnt += 1;
	}
	return (cnt);
}

static void ft_ispace(t_fopt *fopt, int num, int *nlen)
{
	int space;

	space = 0;
	if (fopt->nprec > *nlen) //zero가 있는 곳
		space = fopt->width - fopt->nprec;
	else
		space = fopt->width - *nlen;
	space = num < 0 ? space - 1: space;
	if (fopt->fzero && !fopt->dot && fopt->nprec < 1)
		space -= fopt->width - *nlen;
	while (space-- > 0)
		ft_putchar(' ', fopt);
}

static void ft_izero(t_fopt *fopt, int *nlen)
{
	int zlen;

	if (fopt->fzero && !fopt->dot && fopt->nprec < 1)
		zlen = fopt->width - *nlen;
	else
		zlen = fopt->nprec - *nlen;
	while (zlen-- > 0)
		ft_putchar('0', fopt);
}

void ft_print_i(va_list ap, t_fopt *fopt)
{
	int num;
	int nlen;

	num = va_arg(ap, int);
	nlen = (num < 0) ? ft_ilen(-num, fopt) : ft_ilen(num, fopt);
	(fopt->fminus) ? 0 : ft_ispace(fopt, num, &nlen);
	num < 0 ? ft_putchar('-', fopt) : 0;
	ft_izero(fopt, &nlen);
	num < 0 ? ft_inspace(-num, fopt) : ft_inspace(num, fopt);
	fopt->fminus = (fopt->fminus) ? 0 : 1;
	(fopt->fminus) ? 0 : ft_ispace(fopt, num, &nlen);
}