/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:19:14 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/05 16:55:42 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_check(va_list ap, t_foption *foption)
{
	if (foption->type == 'c')
		ft_print_c(ap, foption);
	else if (foption->type == 's')
		ft_print_s(ap, foption);
	// else if (foption->type == 'p')
	// 	print_cnt += ft_print_p();
	else if (foption->type == 'd')
		ft_print_d(ap, foption);
	// else if (foption->type == 'i')
	// 	ft_print_i(ap, foption);
	// else if (foption->type == 'u')
	// 	print_cnt += ft_print_u();
	// else if (foption->type == 'x')
	// 	print_cnt += ft_print_x();
	// else if (foption->type == 'X')
	// 	print_cnt += ft_print_X();
	// else
	// 	ft_print_c(ap, foption);
}