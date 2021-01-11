/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:17:10 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/11 14:11:05 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	t_fopt	fopt;
	char	*strptr;
	int 	lprint;

	va_start(ap, str);
	strptr = (char *)str;
	ft_init_foption(&fopt);
	lprint = 0;
	while (*strptr)
	{
		if (*strptr == '%')
		{
			ft_option_cal(ap, &strptr, &fopt, &lprint);
			ft_init_foption(&fopt);
		}
		else
		{
			ft_putchar(*strptr, &lprint);
			strptr++;
		}
	}
	va_end(ap);
	return (lprint);
}
