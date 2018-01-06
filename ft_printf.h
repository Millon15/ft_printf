/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 11:49:12 by vbrazas           #+#    #+#             */
/*   Updated: 2018/01/06 18:47:55 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# include <stdio.h>

typedef struct		s_flags
{
	unsigned int	small_x : 1;
	unsigned int	plus : 1;
	unsigned int	minus : 1;
	unsigned int	space : 1;
	unsigned int	hesh : 1;
	unsigned int	zero : 1;
	unsigned int	hh : 1;
	unsigned int	h : 1;
	unsigned int	l : 1;
	unsigned int	ll : 1;
	unsigned int	j : 1;
	unsigned int	z : 1;
	unsigned int	t : 1;
	unsigned int	L : 1;
	unsigned int	precs_spec : 1;
	unsigned int	precision;
	unsigned int	min_lenth;
}					t_flags;

void				print_fl(t_flags **fl);

int					ft_printf(const char *s, ...);

int					ft_putchar(int c);
int					ft_strlen(const char *s);
int					ft_putstr(const char *s);
void				*ft_memalloc(size_t size);

int					put_s(const char *s, t_flags *fl);
int					put_di(long long n, short base, t_flags *fl);

#endif