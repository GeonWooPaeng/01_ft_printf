/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:56:39 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/05 21:41:52 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_nspace(va_list ap, t_foption *foption)
{
	ft_putchar(va_arg(ap, int));
	foption->width -= 1;
	foption->minus_flag = 0;
}

static void ft_space(t_foption *foption)
{
	while (foption->width > 0)
	{
		ft_putchar(' ');
		foption->width--;
	}
}

int ft_print_c(va_list ap, t_foption *foption)
{
	if (foption->zero_flag)
	{
		ft_nspace(ap, foption);
		return (1);
	}
	else if (foption->minus_flag)
	{
		ft_nspace(ap, foption);
		ft_space(foption);
	}
	else
	{
		ft_space(foption);
		ft_nspace(ap, foption);
	}
	return (foption->width);
}