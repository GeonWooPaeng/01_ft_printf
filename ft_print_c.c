/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:56:39 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/11 17:48:31 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_cnspace(va_list ap, int *lprint)
{
	char c;

	c = va_arg(ap, int);
	ft_putchar(c, lprint);
}

static void	ft_cspace(t_fopt *fopt, int *lprint)
{
	if (!fopt->fminus && fopt->fzero && !fopt->dot && fopt->nprec < 1)
		return ;
	while (--fopt->width > 0)
		ft_putchar(' ', lprint);
}

void		ft_print_c(va_list ap, t_fopt *fopt, int *lprint)
{
	fopt->fminus ? 0 : ft_cspace(fopt, lprint);
	ft_cnspace(ap, lprint);
	fopt->fminus = (fopt->fminus) ? 0 : 1;
	fopt->fminus ? 0 : ft_cspace(fopt, lprint);
}
