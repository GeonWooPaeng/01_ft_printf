/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:50:52 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/09 17:45:10 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstr(char *str, t_fopt *fopt)
{
	int idx;

	idx = 0;
	if (!str || (fopt->dot && fopt->nprec < 1))
		return ;
	if (fopt->nprec)
	{
		while (str[idx] && idx < fopt->nprec)
			ft_putchar(str[idx++], fopt);
	}
	else
	{
		while (str[idx])
			ft_putchar(str[idx++], fopt);
	}
}

static void	ft_snspace(va_list ap, t_fopt *fopt, char *str)
{
	int len;
	int idx;

	len = ft_strlen(str);
	ft_putstr(str, fopt);
}

static void	ft_sspace(t_fopt *fopt, char *str)
{
	if (fopt->nprec > 0 && fopt->width > fopt->nprec)
		fopt->width = fopt->width - fopt->nprec;
	else
		fopt->width = fopt->width - ft_strlen(str);
	while (fopt->width-- > 0)
		ft_putchar(' ', fopt);
}

void		ft_print_s(va_list ap, t_fopt *fopt)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	(fopt->fminus) ? 0 : ft_sspace(fopt, str);
	ft_snspace(ap, fopt, str);
	fopt->fminus = fopt->fminus ? 0 : 1;
	(fopt->fminus) ? 0 : ft_sspace(fopt, str);
}