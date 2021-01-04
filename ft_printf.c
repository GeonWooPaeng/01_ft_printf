/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:17:10 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/04 17:46:27 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void init_foption(t_foption *foption)
{
	foption->minus_flag = 0;
	foption->zero_flag = 0;
	foption->width = 0;
	foption->dot = 0;
	foption->type = 0;
}

int ft_printf(const char *type, ...)
{
	va_list ap;
	t_foption foption;

	init_foption(&foption);
	va_start(ap, type);
	va_end(ap);

}
