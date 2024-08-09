/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:33:44 by atovoman          #+#    #+#             */
/*   Updated: 2024/03/15 08:12:15 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	length(int i)
{
	int	count;

	count = 0;
	if (i < 0)
		count = 1;
	while (i != 0)
	{
		count++;
		i = i / 10;
	}
	return (count);
}

int	ft_printf_integer(va_list ap)
{
	int	temp;

	temp = va_arg(ap, int);
	if (temp == 0)
	{
		ft_putchar('0');
		return (1);
	}
	ft_putnbr(temp);
	return (length(temp));
}
