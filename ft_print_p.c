/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 18:00:11 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/10 15:13:07 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_plen(long long num)
{
	int cnt;

	cnt = 0;
	while (num > 0)
	{
		num /= 16;
		cnt += 1;
	}
	return (cnt);
}

static void ft_pspace(t_fopt *fopt, int *nlen)
{
	int space;
	
	space = fopt->width - *nlen;
	space -= 2;
	while (space-- > 0)
		ft_putchar(' ', fopt);
}

static void ft_pnspace(t_fopt *fopt, long long num, int *nlen)
{
	char *base;

	base = "0123456789abcdef";
	if (num > 15)
		ft_pnspace(fopt, num / 16, nlen);
	ft_putchar(base[num % 16], fopt);
}

void ft_print_p(va_list ap, t_fopt *fopt)
{
	long long num;
	int nlen;

	num = va_arg(ap, long long);
	nlen = ft_plen(num);
	fopt->fminus ? 0 : ft_pspace(fopt, &nlen);
	ft_putchar('0', fopt);
	ft_putchar('x', fopt);
	ft_pnspace(fopt, num, &nlen);
	fopt->fminus = fopt->fminus ? 0 : 1;
	fopt->fminus ? 0 : ft_pspace(fopt, &nlen);
}