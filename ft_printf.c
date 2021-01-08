/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:17:10 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/08 15:53:06 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list ap;
	t_fopt fopt;
	char *strptr;

	ft_init_foption(&fopt);
	va_start(ap, str);
	strptr = (char *)str;
	while(*strptr)
	{
		if (*strptr == '%')
			{
				ft_option_cal(ap, &strptr, &fopt);
				ft_init_foption(&fopt);
			}
		else
		{
			ft_putchar(*strptr, &fopt);
			strptr++;
		}
	}
	va_end(ap);
	return (0);
}
