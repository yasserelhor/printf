/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajawad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 00:39:49 by ajawad            #+#    #+#             */
/*   Updated: 2023/11/16 01:01:33 by ajawad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	num_of_digitsp(unsigned long long int num)
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

static void	print_add(unsigned long long int add)
{
	if (add < 16)
	{
		ft_putchar("0123456789abcdef"[add]);
		return ;
	}
	print_add(add / 16);
	ft_putchar("0123456789abcdef"[add % 16]);
}

int	ft_printp(va_list args)
{
	void					*ptr;
	unsigned long long int	add;
	int						len;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	add = (unsigned long long int)ptr;
	write(1, "0x", 2);
	len = num_of_digitsp(add);
	print_add(add);
	len += 2;
	return (len);
}
