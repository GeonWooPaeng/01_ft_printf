/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:17:31 by gpaeng            #+#    #+#             */
/*   Updated: 2021/01/12 13:32:09 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct	s_format_opt
{
	int			fminus;
	int			fzero;
	int			width;
	int			dot;
	int			nprec;
	int			type;
}				t_fopt;

int				ft_printf(const char *str, ...);
void			ft_opt_cal(va_list ap, char **str, t_fopt *fopt, int *lprint);
void			ft_print_check(va_list ap, t_fopt *fopt, int *lprint);

void			ft_putchar(char c, int *lprint);
void			ft_init_foption(t_fopt *fopt);

void			ft_print_c(va_list ap, t_fopt *fopt, int *lprint);
void			ft_print_s(va_list ap, t_fopt *fopt, int *lprint);
void			ft_print_p(va_list ap, t_fopt *fopt, int *lprint);
void			ft_print_d(va_list ap, t_fopt *fopt, int *lprint);
void			ft_print_i(va_list ap, t_fopt *fopt, int *lprint);
void			ft_print_u(va_list ap, t_fopt *fopt, int *lprint);
void			ft_print_x(va_list ap, t_fopt *fopt, int *lprint);
void			ft_print_bx(va_list ap, t_fopt *fopt, int *lprint);
void			ft_print_per(t_fopt *fopt, int *lprint);

#endif
