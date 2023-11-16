/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printh.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajawad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 00:33:59 by ajawad            #+#    #+#             */
/*   Updated: 2023/11/16 00:34:44 by ajawad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	num_of_digitsh(unsigned int num)
{
	int	digits;

	digits = 1;
	while (num > 15)
	{
		num /= 16;
		digits++;
	}
	return (digits);
}

static void	print_hex(unsigned int num)
{
	if (num < 16)
	{
		ft_putchar("0123456789abcdef"[num]);
		return ;
	}
	print_hex(num / 16);
	ft_putchar("0123456789abcdef"[num % 16]);
}

int	ft_printh(va_list args)
{
	unsigned int	num;
	int				len;

	num = va_arg(args, unsigned int);
	len = num_of_digitsh(num);
	print_hex(num);
	return (len);
}
