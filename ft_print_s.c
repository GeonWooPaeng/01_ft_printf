/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:50:52 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/08 14:33:29 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_putstr(char *str, t_foption *foption)
{
	int idx;

	idx = 0;
	if (!str || (foption->dot && foption->precision_n < 1))
		return ;
	if (foption->precision_n)
	{
		while (str[idx] && idx < foption->precision_n)
			ft_putchar(str[idx++], foption);
	}
	else
	{
		while (str[idx])
			ft_putchar(str[idx++], foption);
	}
}

static void ft_snspace(va_list ap, t_foption *foption, char *str)
{
	int len;
	int idx;

	len = ft_strlen(str);
	foption->print_len += len;
	ft_putstr(str, foption);
	foption->minus_flag = 0;
}

static void ft_sspace(t_foption *foption, char *str)
{
	if (foption->precision_n > 0 && foption->width > foption->precision_n)
		foption->width = foption->width - foption->precision_n;
	else
		foption->width = foption->width - ft_strlen(str);
	while (foption->width-- > 0)
		ft_putchar(' ', foption);
}

void ft_print_s(va_list ap, t_foption *foption)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	(foption->minus_flag) ? 0 : ft_sspace(foption, str);
	ft_snspace(ap, foption, str);
	(foption->minus_flag) ? 0 : ft_sspace(foption, str);
}