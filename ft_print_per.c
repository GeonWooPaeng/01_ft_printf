/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_per.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 20:42:59 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/12 20:39:16 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_perspace(t_fopt *fopt, int *lprint)
{
	int space;

	if (fopt->fzero && !fopt->fminus)
		return ;
	space = fopt->width - 1;
	while (space-- > 0)
		ft_putchar(' ', lprint);
}

static void	ft_perzero(t_fopt *fopt, int *lprint)
{
	int zlen;

	zlen = 0;
	if (fopt->fzero && !fopt->fminus)
		zlen = fopt->width - 1;
	while (zlen-- > 0)
		ft_putchar('0', lprint);
}

void		ft_print_per(t_fopt *fopt, int *lprint)
{
	fopt->fminus ? 0 : ft_perspace(fopt, lprint);
	ft_perzero(fopt, lprint);
	ft_putchar('%', lprint);
	fopt->fminus = fopt->fminus ? 0 : 1;
	fopt->fminus ? 0 : ft_perspace(fopt, lprint);
}
