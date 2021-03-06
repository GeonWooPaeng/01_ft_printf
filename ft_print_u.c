/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:40:36 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/11 14:03:12 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ulen(t_fopt *fopt, unsigned int num)
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

static void	ft_uspace(t_fopt *fopt, int *nlen, int *lprint)
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

static void	ft_uzero(t_fopt *fopt, int *nlen, int *lprint)
{
	int zlen;

	if (fopt->fzero && !fopt->dot && fopt->nprec < 1)
		zlen = fopt->width - *nlen;
	else
		zlen = fopt->nprec - *nlen;
	while (zlen-- > 0)
		ft_putchar('0', lprint);
}

static void	ft_unspace(t_fopt *fopt, unsigned num, int *lprint)
{
	if (num == 0 && fopt->dot && fopt->nprec < 1)
		return ;
	if (num > 9)
		ft_unspace(fopt, num / 10, lprint);
	ft_putchar(num % 10 + '0', lprint);
}

void		ft_print_u(va_list ap, t_fopt *fopt, int *lprint)
{
	unsigned int	num;
	int				nlen;

	num = va_arg(ap, unsigned int);
	nlen = ft_ulen(fopt, num);
	fopt->fminus ? 0 : ft_uspace(fopt, &nlen, lprint);
	ft_uzero(fopt, &nlen, lprint);
	ft_unspace(fopt, num, lprint);
	fopt->fminus = fopt->fminus ? 0 : 1;
	fopt->fminus ? 0 : ft_uspace(fopt, &nlen, lprint);
}
