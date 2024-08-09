/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:58:56 by atovoman          #+#    #+#             */
/*   Updated: 2024/03/15 07:55:29 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_search_format(char const *s, va_list ap)
{
	int	result;

	result = 0;
	if (*(s + 1) == '%')
	{
		ft_putchar('%');
		return (1);
	}
	else if (*(s + 1) == 's')
		result = (int)ft_printf_string(ap);
	else if (*(s + 1) == 'd')
		result = (int)ft_printf_decimal(ap);
	else if (*(s + 1) == 'i')
		result = (int)ft_printf_integer(ap);
	else if (*(s + 1) == 'c')
		result = (int)ft_printf_char(ap);
	else if (*(s + 1) == 'u')
		result = (int)ft_printf_unsigned(ap);
	else if (*(s + 1) == 'x')
		result = (int)ft_printf_hex_lower(ap);
	else if (*(s + 1) == 'X')
		result = (int)ft_printf_hex_upper(ap);
	else if (*(s + 1) == 'p')
		result = (int)ft_printf_pointer(ap);
	return (result);
}
