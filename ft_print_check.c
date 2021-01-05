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

void ft_print_check(char **str ,t_foption *foption, int *print_cnt)
{
	if (foption->type == 'c')
		ft_print_c();
	else if (foption->type == 's')
		ft_print_s();
	else if (foption->type == 'p')
		ft_print_p();
	else if (foption->type == 'd')
		ft_print_d();
	else if (foption->type == 'i')
		ft_print_i();
	else if (foption->type == 'u')
		ft_print_u();
	else if (foption->type == 'x')
		ft_print_x();
	else if (foption->type == 'X')
		ft_print_X();
	else
		ft_print_percent();
}