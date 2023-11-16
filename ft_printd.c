/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajawad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 00:30:34 by ajawad            #+#    #+#             */
/*   Updated: 2023/11/16 00:30:36 by ajawad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	num_of_digits(long num)
{
	int	digits;

	digits = 1;
	if (num < 0)
	{
		digits++;
		num *= -1;
	}
	while (num > 9)
	{
		num /= 10;
		digits++;
	}
	return (digits);
}

static void	print_int(long num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num < 10)
	{
		ft_putchar(num + '0');
		return ;
	}
	print_int(num / 10);
	ft_putchar(num % 10 + '0');
}

int	ft_printd(va_list args)
{
	int	num;
	int	len;

	num = va_arg(args, int);
	len = num_of_digits(num);
	print_int(num);
	return (len);
}
