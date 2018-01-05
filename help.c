/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 12:37:39 by vbrazas           #+#    #+#             */
/*   Updated: 2018/01/05 19:55:16 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*k;
	size_t			i;

	if (n <= 0)
		return ;
	k = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		k[i] = 0;
		i++;
	}
}

void	*ft_memalloc(size_t size)
{
	void	*buf;

	buf = (void *)malloc(size);
	if (buf != NULL)
		ft_bzero(buf, size);
	return (buf);
}

int		ft_putchar(int c)
{
	return ((int)write(1, &c, 1));
}

int		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		ft_putstr(const char *s)
{
	return ((int)write(1, s, ft_strlen(s)));
}
