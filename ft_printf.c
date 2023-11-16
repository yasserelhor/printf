/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajawad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:01:03 by ajawad            #+#    #+#             */
/*   Updated: 2023/11/16 00:33:29 by ajawad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	isformat(char c)
{
	char	*str;

	str = "csiduxX%%p";
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static int	ft_handle_format(const char *str, va_list args)
{
	int	len;

	if (str[1] == 'c')
		len = ft_printc(args);
	else if (str[1] == 's')
		len = ft_prints(args);
	else if (str[1] == 'i')
		len = ft_printd(args);
	else if (str[1] == 'd')
		len = ft_printd(args);
	else if (str[1] == 'u')
		len = ft_printu(args);
	else if (str[1] == 'x')
		len = ft_printh(args);
	else if (str[1] == 'X')
		len = ft_printuph(args);
	else if (str[1] == '%')
		len = ft_printperc();
	else if (str[1] == 'p')
		len = ft_printp(args);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			len;
	int			i;

	i = 0;
	len = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && isformat(str[i + 1]))
		{
			len += ft_handle_format(&str[i], args);
			i += 2;
		}
		else if (str[i] == '%' && !isformat(str[i + 1]))
			return (-1);
		else
			len += ft_putchar(str[i++]);
	}
	va_end(args);
	return (len);
}
