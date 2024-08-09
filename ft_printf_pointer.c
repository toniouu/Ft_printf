/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:31:39 by atovoman          #+#    #+#             */
/*   Updated: 2024/03/15 07:55:09 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	length(unsigned long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

static int	ft_print_hex(unsigned long n)
{
	if (n >= 16)
	{
		ft_print_hex(n / 16);
		ft_print_hex(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
			ft_putchar(n - 10 + 'a');
	}
	return (length(n));
}

int	ft_printf_pointer(va_list ap)
{
	unsigned long	adr;

	adr = (unsigned long)(va_arg(ap, void *));
	if (adr == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	ft_print_hex(adr);
	return (length(adr) + 2);
}
