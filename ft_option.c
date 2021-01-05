/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_option.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 20:52:59 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/05 21:48:58 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_flag(char **str, t_foption *foption)
{
	while (**str == '-' || **str == '0')
	{
		if (**str == '-')
			foption->minus_flag = 1;
		else if (**str == '0')
			foption->zero_flag = 1;
		(*str)++; 
	}
	if (foption->minus_flag && foption->zero_flag) //같이 있으면 '-'만 실행
		foption->zero_flag = 0;
}

static void ft_width(va_list ap, char **str, t_foption *foption)
{
	if (**str == '*')
	{
		foption->width = va_arg(ap, int);
		if (foption->width < 0)
		{//음수 이면 좌측 정렬
			foption->zero_flag = 0; // 0은 왼쪽에만 넣어주기 때문 
			foption->minus_flag = 1;
			foption->width *= -1;
		}
		(*str)++;
	}
	while (**str >= '0' && **str <= '9' )
	{
		foption->width = (foption->width * 10) + (**str - '0');
		(*str)++;
	}
}

static void ft_precision(va_list ap, char **str, t_foption *foption)
{
	if (**str == '.')
	{
		foption->dot = 1;
		(*str)++;
	}
	if (**str == '*')
	{
		foption->precision_n = va_arg(ap, int);
		if (foption->precision_n < 0)
			foption->precision_n = 0;
		(*str)++;
	}
	while (**str >= '0' && **str <= '9')
	{
		foption->precision_n = (foption->precision_n * 10) + (**str - '0');
		(*str)++;
	}
}

static void ft_type(char **str, t_foption *foption)
{
	if (**str == 'c' || **str == 's' || **str == 'p' 
	|| **str == 'd' || **str == 'i' || **str == 'u' 
	|| **str == 'x' || **str == 'X' || **str == '%')
		foption->type = **str;
	(*str)++;
}

void ft_option_cal(va_list ap, char **str, t_foption *foption)
{
	++(*str);
	ft_flag(str, foption);
	ft_width(ap, str, foption);
	ft_precision(ap, str, foption);
	ft_type(str, foption);
	ft_print_check(ap, foption);
}