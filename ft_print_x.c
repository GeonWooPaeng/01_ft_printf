/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 14:22:56 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/11 14:04:05 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_xlen(t_fopt *fopt, unsigned int num)
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

static void	ft_xspace(t_fopt *fopt, int *nlen, int *lprint)
{
	int space;

	if (fopt->nprec > *nlen)
		space = fopt->width - fopt->nprec;
	else
		space = fopt->width - *nlen;
	if (fopt->fzero && !fopt->dot && fopt->nprec < 1)
		space = 0;
	while (space-- > 0)
		ft_putchar(' ', lprint);
}

static void	ft_xzero(t_fopt *fopt, int *nlen, int *lprint)
{
	int zlen;

	if (fopt->fzero && !fopt->dot && fopt->nprec < 1)
		zlen = fopt->width - *nlen;
	else
		zlen = fopt->nprec - *nlen;
	while (zlen-- > 0)
		ft_putchar('0', lprint);
}

static void	ft_xnspace(t_fopt *fopt, unsigned int num, int *nlen, int *lprint)
{
	char *base;

	base = "0123456789abcdef";
	if (num == 0 && fopt->dot && fopt->nprec < 1)
		return ;
	if (num > 15)
		ft_xnspace(fopt, num / 16, nlen, lprint);
	ft_putchar(base[num % 16], lprint);
}

void		ft_print_x(va_list ap, t_fopt *fopt, int *lprint)
{
	unsigned int	num;
	int				nlen;

	num = va_arg(ap, unsigned int);
	nlen = ft_xlen(fopt, num);
	fopt->fminus ? 0 : ft_xspace(fopt, &nlen, lprint);
	ft_xzero(fopt, &nlen, lprint);
	ft_xnspace(fopt, num, &nlen, lprint);
	fopt->fminus = fopt->fminus ? 0 : 1;
	fopt->fminus ? 0 : ft_xspace(fopt, &nlen, lprint);
}
