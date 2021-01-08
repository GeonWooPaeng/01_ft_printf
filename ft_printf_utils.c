/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 20:17:32 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/08 14:32:52 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_init_foption(t_foption *foption)
{
	foption->minus_flag = 0;
	foption->zero_flag = 0;
	foption->width = 0;
	foption->dot = 0;
	foption->precision_n = 0;
	foption->type = 0;
	foption->print_len = 0;
}

void	ft_putchar(char c, t_foption *foption)
{
	write(1, &c, 1);
	foption->print_len += 1;
}

int ft_strlen(char *str)
{
	int idx;

	idx = 0;
	while(str[idx])
	{
		idx++;
	}
	return (idx);
}

