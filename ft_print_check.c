/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:19:14 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/12 16:43:16 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_check(va_list ap, t_fopt *fopt, int *lprint)
{
	if (fopt->type == 'c')
		ft_print_c(ap, fopt, lprint);
	else if (fopt->type == 's')
		ft_print_s(ap, fopt, lprint);
	else if (fopt->type == 'p')
		ft_print_p(ap, fopt, lprint);
	else if (fopt->type == 'd')
		ft_print_d(ap, fopt, lprint);
	else if (fopt->type == 'i')
		ft_print_i(ap, fopt, lprint);
	else if (fopt->type == 'u')
		ft_print_u(ap, fopt, lprint);
	else if (fopt->type == 'x')
		ft_print_x(ap, fopt, lprint);
	else if (fopt->type == 'X')
		ft_print_bx(ap, fopt, lprint);
	else if (fopt->type == '%')
		ft_print_per(fopt, lprint);
}
