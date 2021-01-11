/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_per.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 20:42:59 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/11 14:04:40 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_perspace(t_fopt *fopt, int *lprint)
{
	while (--fopt->width > 0)
		ft_putchar(' ', lprint);
}

void		ft_print_per(t_fopt *fopt, int *lprint)
{
	fopt->fminus ? 0 : ft_perspace(fopt, lprint);
	ft_putchar('%', lprint);
	fopt->fminus = fopt->fminus ? 0 : 1;
	fopt->fminus ? 0 : ft_perspace(fopt, lprint);
}
