/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajawad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:05:37 by ajawad            #+#    #+#             */
/*   Updated: 2023/11/16 01:07:53 by ajawad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_slen(const char *s)
{
	int	len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

int	ft_prints(va_list val)
{
	char	*s;
	int		i;
	int		len;

	i = 0;
	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = ft_slen(s);
		while (i < len)
			ft_putchar(s[i++]);
		return (len);
	}
	else
	{
		len = ft_slen(s);
		while (i < len)
			ft_putchar(s[i++]);
		return (len);
	}
}
