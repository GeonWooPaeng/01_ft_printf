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

void ft_print_check(va_list ap, t_fopt *fopt)
{
	if (fopt->type == 'c')
		ft_print_c(ap, fopt);
	else if (fopt->type == 's')
		ft_print_s(ap, fopt);
	// else if (fopt->type == 'p')
	// 	print_cnt += ft_print_p();
	else if (fopt->type == 'd')
		ft_print_d(ap, fopt);
	else if (fopt->type == 'i')
		ft_print_i(ap, fopt);
	else if (fopt->type == 'u')
		ft_print_u(ap, fopt);
	else if (fopt->type == 'x')
		ft_print_x(ap, fopt);
	else if (fopt->type == 'X')
		ft_print_bx(ap, fopt);
	// else
	// 	ft_print_c(ap, fopt);
}