/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printH.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajawad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 00:35:16 by ajawad            #+#    #+#             */
/*   Updated: 2023/11/16 00:53:18 by ajawad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	num_of_digitsuph(unsigned int num)
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

static void	print_uphex(unsigned int num)
{
	if (num < 16)
	{
		ft_putchar("0123456789ABCDEF"[num]);
		return ;
	}
	print_uphex(num / 16);
	ft_putchar("0123456789ABCDEF"[num % 16]);
}

int	ft_printuph(va_list args)
{
	unsigned int	num;
	int				len;

	num = va_arg(args, unsigned int);
	len = num_of_digitsuph(num);
	print_uphex(num);
	return (len);
}
