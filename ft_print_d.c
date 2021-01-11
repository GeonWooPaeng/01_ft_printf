/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:12:01 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/11 17:38:35 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_dnspace(long long num, t_fopt *fopt, int *lprint)
{
	if (num == 0 && fopt->dot && fopt->nprec < 1)
		return ;
	if (num > 9)
		ft_dnspace(num / 10, fopt, lprint);
	ft_putchar(num % 10 + '0', lprint);
}

static int	ft_dlen(long long num, t_fopt *fopt)
{
	int cnt;

	cnt = 0;
	if (num == 0 && fopt->dot && fopt->nprec < 1)
		return (0);
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		cnt += 1;
	}
	return (cnt);
}

static void	ft_dspace(t_fopt *fopt, long long num, int *nlen, int *lprint)
{
	int space;

	space = 0;
	if (fopt->nprec > *nlen)
		space = fopt->width - fopt->nprec;
	else
		space = fopt->width - *nlen;
	space = (num < 0) ? space - 1 : space;
	if (fopt->fzero && !fopt->dot && fopt->nprec < 1)
		space = 0;
	while (space-- > 0)
		ft_putchar(' ', lprint);
}

static void	ft_dzero(t_fopt *fopt, int *nlen, int *lprint)
{
	int zlen;

	if (fopt->fzero && !fopt->dot && fopt->nprec < 1)
		zlen = fopt->width - *nlen;
	else
		zlen = fopt->nprec - *nlen;
	while (zlen-- > 0)
		ft_putchar('0', lprint);
}

void		ft_print_d(va_list ap, t_fopt *fopt, int *lprint)
{
	long long num;
	int nlen;

	num = va_arg(ap, int);
	nlen = (num < 0) ? ft_dlen(-num, fopt) : ft_dlen(num, fopt);
	(fopt->fminus) ? 0 : ft_dspace(fopt, num, &nlen, lprint);
	num < 0 ? ft_putchar('-', lprint) : 0;
	ft_dzero(fopt, &nlen, lprint);
	num < 0 ? ft_dnspace(-num, fopt, lprint) : ft_dnspace(num, fopt, lprint);
	fopt->fminus = (fopt->fminus) ? 0 : 1;
	(fopt->fminus) ? 0 : ft_dspace(fopt, num, &nlen, lprint);
}
