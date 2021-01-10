/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:17:31 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/10 16:50:17 by gpaeng           ###   ########.fr       */
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

// utils
void	ft_putchar(char c, t_fopt *fopt);
void	ft_init_foption(t_fopt *fopt);
int		ft_strlen(char *str);

//type
void	ft_print_c(va_list ap, t_fopt *fopt);
void	ft_print_s(va_list ap, t_fopt *fopt);
void	ft_print_p(va_list ap, t_fopt *fopt);
void	ft_print_d(va_list ap, t_fopt *fopt);
void	ft_print_i(va_list ap, t_fopt *fopt);
void	ft_print_u(va_list ap, t_fopt *fopt);
void	ft_print_x(va_list ap, t_fopt *fopt);
void	ft_print_bx(va_list ap, t_fopt *fopt);
void	ft_print_per(t_fopt *fopt);

#endif