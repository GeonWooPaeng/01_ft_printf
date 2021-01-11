/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:50:52 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/11 17:11:04 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt])
	{
		cnt++;
	}
	return (cnt);
}

static void	ft_snspace(t_fopt *fopt, char *str, int *lprint, int *slen)
{
	int idx;
	int len;

	idx = 0;
	if (!str || (fopt->dot && fopt->nprec < 1) || fopt->fzero)
		return ;
	if (!fopt->fzero && fopt->dot && fopt->nprec > 0 && fopt->nprec < *slen)
		len = fopt->nprec;
	else
		len = *slen;
	while (str[idx] && idx < len)
	{
		ft_putchar(str[idx], lprint);
		idx++;
	}
}

static void	ft_sspace(t_fopt *fopt, int *lprint, int *slen)
{
	int space;

	if (fopt->fzero && !fopt->dot && fopt->nprec < 1 && fopt->fminus)
		return ;
	if (fopt->nprec > 0 && fopt->width > fopt->nprec)
		space = fopt->width - fopt->nprec;
	else
		space = fopt->width - *slen;
	while (space-- > 0)
		ft_putchar(' ', lprint);
}

void		ft_print_s(va_list ap, t_fopt *fopt, int *lprint)
{
	char	*str;
	int		slen;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	slen = ft_strlen(str);
	(fopt->fminus) ? 0 : ft_sspace(fopt, lprint, &slen);
	ft_snspace(fopt, str, lprint, &slen);
	fopt->fminus = fopt->fminus ? 0 : 1;
	(fopt->fminus) ? 0 : ft_sspace(fopt, lprint, &slen);
}
