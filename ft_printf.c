/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:17:10 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/08 14:35:23 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list ap;
	t_foption foption;
	char *strptr;

	ft_init_foption(&foption);
	va_start(ap, str);
	strptr = (char *)str;
	while(*strptr)
	{
		if (*strptr == '%')
			{
				ft_option_cal(ap, &strptr, &foption);
				ft_init_foption(&foption);
			}
		else
		{
			ft_putchar(*strptr, &foption);
			strptr++;
		}
	}
	va_end(ap);
	return (0);
}
