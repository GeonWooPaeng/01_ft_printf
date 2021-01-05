/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 20:17:32 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/05 21:43:44 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_init_foption(t_foption *foption)
{
	foption->minus_flag = 0;
	foption->zero_flag = 0;
	foption->width = 0;
	foption->dot = 0;
	foption->precision_n = -1;
	foption->type = 0;
	foption->print_len = 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
