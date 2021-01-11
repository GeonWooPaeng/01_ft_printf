/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 20:17:32 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/11 17:00:27 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_foption(t_fopt *fopt)
{
	fopt->fminus = 0;
	fopt->fzero = 0;
	fopt->width = 0;
	fopt->dot = 0;
	fopt->nprec = 0;
	fopt->type = 0;
}

void	ft_putchar(char c, int *lprint)
{
	write(1, &c, 1);
	*lprint += 1;
}
