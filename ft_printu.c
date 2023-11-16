/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajawad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:02:54 by ajawad            #+#    #+#             */
/*   Updated: 2023/11/16 01:03:58 by ajawad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	num_of_digitsu(unsigned int num)
{
	int	digits;

	digits = 1;
	while (num > 9)
	{
		num /= 10;
		digits++;
	}
	return (digits);
}

static void	print_unsigned(unsigned int num)
{
	if (num < 10)
	{
		ft_putchar(num + '0');
		return ;
	}
	print_unsigned(num / 10);
	ft_putchar(num % 10 + '0');
}

int	ft_printu(va_list args)
{
	unsigned int	num;
	int				len;

	num = va_arg(args, unsigned int);
	len = num_of_digitsu(num);
	print_unsigned(num);
	return (len);
}
