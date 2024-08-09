/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:34:30 by atovoman          #+#    #+#             */
/*   Updated: 2024/03/15 07:51:01 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_len(unsigned int n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

static char	*to_unsigned(unsigned int n)
{
	char			*result;
	unsigned int	len;

	len = ft_len(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	if (n == 0)
	{
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	result[len] = '\0';
	while (n != 0)
	{
		result[--len] = (char)(n % 10) + '0';
		n /= 10;
	}
	return (result);
}

int	ft_printf_unsigned(va_list ap)
{
	char	*temp;
	int		count;

	temp = to_unsigned(va_arg(ap, unsigned int));
	if (!temp)
		return (0);
	count = 0;
	while (temp[count] != '\0')
	{
		ft_putchar(temp[count]);
		count++;
	}
	free(temp);
	return (count);
}
