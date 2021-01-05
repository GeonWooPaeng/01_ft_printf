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
		foption->print_len += ft_print_c(ap, foption);
	// else if (foption->type == 's')
	// 	print_cnt += ft_print_s();
	// else if (foption->type == 'p')
	// 	print_cnt += ft_print_p();
	// else if (foption->type == 'd')
	// 	print_cnt += ft_print_d();
	// else if (foption->type == 'i')
	// 	print_cnt += ft_print_i();
	// else if (foption->type == 'u')
	// 	print_cnt += ft_print_u();
	// else if (foption->type == 'x')
	// 	print_cnt += ft_print_x();
	// else if (foption->type == 'X')
	// 	print_cnt += ft_print_X();
	// else
	// 	print_cnt += ft_print_percent();
}