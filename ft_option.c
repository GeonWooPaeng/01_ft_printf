/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_option.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 20:52:59 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/11 13:54:43 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_flag(char **str, t_fopt *fopt)
{
	while (**str == '-' || **str == '0')
	{
		if (**str == '-')
			fopt->fminus = 1;
		else if (**str == '0')
			fopt->fzero = 1;
		(*str)++;
	}
	if (fopt->fminus && fopt->fzero)
		fopt->fzero = 0;
}

static void	ft_width(va_list ap, char **str, t_fopt *fopt)
{
	if (**str == '*')
	{
		fopt->width = va_arg(ap, int);
		if (fopt->width < 0)
		{
			if (fopt->fzero == 1)
				fopt->fzero = 0;
			fopt->fminus = 1;
			fopt->width *= -1;
		}
		(*str)++;
	}
	while (**str >= '0' && **str <= '9')
	{
		fopt->width = (fopt->width * 10) + (**str - '0');
		(*str)++;
	}
}

static void	ft_precision(va_list ap, char **str, t_fopt *fopt)
{
	if (**str == '.')
	{
		fopt->dot = 1;
		(*str)++;
	}
	if (**str == '*')
	{
		fopt->nprec = va_arg(ap, int);
		if (fopt->nprec < 0)
			fopt->nprec = 0;
		(*str)++;
	}
	while (**str >= '0' && **str <= '9')
	{
		fopt->nprec = (fopt->nprec * 10) + (**str - '0');
		(*str)++;
	}
}

static void	ft_type(char **str, t_fopt *fopt)
{
	if (**str == 'c' || **str == 's' || **str == 'p'
	|| **str == 'd' || **str == 'i' || **str == 'u'
	|| **str == 'x' || **str == 'X' || **str == '%')
		fopt->type = **str;
	(*str)++;
}

void		ft_option_cal(va_list ap, char **str, t_fopt *fopt, int *lprint)
{
	++(*str);
	ft_flag(str, fopt);
	ft_width(ap, str, fopt);
	ft_precision(ap, str, fopt);
	ft_type(str, fopt);
	ft_print_check(ap, fopt, lprint);
}
