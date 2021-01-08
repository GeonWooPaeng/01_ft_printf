/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:17:31 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/08 15:53:41 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct	s_format_opt
{
	int fminus;
	int fzero;
	int width;
	int dot;
	int nprec;
	int type;
	int lprint;
}				t_fopt;

int		ft_printf(const char *str, ...);
void	ft_option_cal(va_list ap, char **str, t_fopt *fopt);
void	ft_print_check(va_list ap, t_fopt *fopt);

// util
void	ft_putchar(char c, t_fopt *fopt);
void	ft_init_foption(t_fopt *fopt);
int		ft_strlen(char *str);

//type
void	ft_print_c(va_list ap, t_fopt *fopt);
void	ft_print_s(va_list ap, t_fopt *fopt);
void	ft_print_d(va_list ap, t_fopt *fopt);
#endif