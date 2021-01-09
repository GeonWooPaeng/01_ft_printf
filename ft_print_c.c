/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:56:39 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/09 17:46:57 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_cnspace(va_list ap, t_fopt *fopt)
{
	char c;

	c = va_arg(ap, int);
	if (c != '\0')
		ft_putchar(c, fopt);
	fopt->fminus = 0;
}

static void	ft_cspace(t_fopt *fopt)
{
	if ( !fopt->fminus && fopt->fzero && !fopt->dot && fopt->nprec < 1)
		return ;
	while (--fopt->width > 0)
		ft_putchar(' ', fopt);
}

void		ft_print_c(va_list ap, t_fopt *fopt)
{
	(fopt->fminus) ? 0 : ft_cspace(fopt);
	ft_cnspace(ap, fopt);
	(fopt->fminus) ? 0 : ft_cspace(fopt);
}