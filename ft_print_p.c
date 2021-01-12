/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 18:00:11 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/12 15:49:58 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_plen(t_fopt *fopt, long long num)
{
	int cnt;

	cnt = 0;
	if (num == 0 && fopt->dot && fopt->nprec < 1)
		return (0);
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 16;
		cnt += 1;
	}
	return (cnt);
}

static void	ft_pspace(t_fopt *fopt, int *nlen, int *lprint)
{
	int space;

	space = fopt->width - *nlen;
	space -= 2;
	while (space-- > 0)
		ft_putchar(' ', lprint);
}

static void	ft_pnspace(t_fopt *fopt, long long num, int *nlen, int *lprint)
{
	char *base;

	base = "0123456789abcdef";
	if (num > 15)
		ft_pnspace(fopt, num / 16, nlen, lprint);
	ft_putchar(base[num % 16], lprint);
}

static void	ft_pzero(t_fopt *fopt, int *nlen, int *lprint)
{
	int zlen;

	if (fopt->fzero && !fopt->dot && fopt->nprec < 1)
		zlen = fopt->width - *nlen;
	else
		zlen = fopt->nprec - *nlen;
	while (zlen-- > 0)
		ft_putchar('0', lprint);
}

void		ft_print_p(va_list ap, t_fopt *fopt, int *lprint)
{
	long long	num;
	int			nlen;

	num = va_arg(ap, long long);
	nlen = ft_plen(fopt, num);
	fopt->fminus ? 0 : ft_pspace(fopt, &nlen, lprint);
	ft_putchar('0', lprint);
	ft_putchar('x', lprint);
	ft_pzero(fopt, &nlen, lprint);
	if (num != 0 || !fopt->dot || fopt->nprec > 0)
		ft_pnspace(fopt, num, &nlen, lprint);
	fopt->fminus = fopt->fminus ? 0 : 1;
	fopt->fminus ? 0 : ft_pspace(fopt, &nlen, lprint);
}
