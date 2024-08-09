/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:30:31 by atovoman          #+#    #+#             */
/*   Updated: 2024/03/15 07:41:47 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_string(va_list ap)
{
	int		count;
	char	*temp;

	temp = va_arg(ap, char *);
	count = 0;
	if (!temp)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (temp[count] != '\0')
	{
		ft_putchar(temp[count]);
		count++;
	}
	return (count);
}
