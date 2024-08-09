/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:13:48 by atovoman          #+#    #+#             */
/*   Updated: 2024/03/15 07:56:05 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	va_list	ap;
	int		result;

	result = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			result += ft_search_format(format, ap);
			format += 2;
		}
		else
		{
			ft_putchar(*format);
			format++;
			result++;
		}
	}
	va_end(ap);
	return (result);
}
