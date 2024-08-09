/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:36:20 by atovoman          #+#    #+#             */
/*   Updated: 2024/03/15 07:54:41 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	length(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

static void	ft_print_hex(unsigned int n)
{
	if (n >= 16)
	{
		ft_print_hex(n / 16);
		ft_print_hex(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + 48);
		else
			ft_putchar(n - 10 + 'A');
	}
}

int	ft_printf_hex_upper(va_list ap)
{
	unsigned int	temp;
	int				count;

	count = 0;
	temp = (va_arg(ap, unsigned int));
	ft_print_hex(temp);
	count = length(temp);
	return (count);
}
