/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:40:36 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/08 16:55:09 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_uspace(t_fopt *fopt, unsigned int num)
{
	unsigned int space;

	if (fopt->fzero && !fopt->dot && fopt->dot < 1)
		space = 
}

void ft_print_u(va_list ap, t_fopt *fopt)
{
	unsigned int num;

	num = va_arg(ap, unsigned int);
	fopt->fminus ? 0 : ft_uspace();
	ft_uzero();
	ft_unspace();
	fopt->fminus = fopt->fminus ? 0 : 1;
	fopt->fminus ? 0 : ft_uspace();
}