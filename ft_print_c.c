/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:56:39 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/08 14:34:09 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_cnspace(va_list ap, t_foption *foption)
{
	char c;

	c = va_arg(ap, int);
	if (c != '\0')
		ft_putchar(c, foption);
	foption->minus_flag = 0;
}

static void ft_cspace(t_foption *foption)
{
	if ( !foption->minus_flag && foption->zero_flag && !foption->dot && foption->precision_n < 1)
		return ;
	while (--foption->width > 0)
		ft_putchar(' ', foption);
}

void ft_print_c(va_list ap, t_foption *foption)
{
	(foption->minus_flag) ? 0 : ft_cspace(foption);
	ft_cnspace(ap, foption);
	(foption->minus_flag) ? 0 : ft_cspace(foption);
}