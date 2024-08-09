/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:08:12 by atovoman          #+#    #+#             */
/*   Updated: 2024/03/15 08:11:34 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char const *format, ...);
int		ft_printf_char(va_list ap);
int		ft_printf_string(va_list ap);
int		ft_printf_pointer(va_list ap);
int		ft_printf_decimal(va_list ap);
int		ft_printf_integer(va_list ap);
int		ft_printf_unsigned(va_list ap);
int		ft_printf_hex_lower(va_list ap);
int		ft_printf_hex_upper(va_list ap);
int		ft_search_format(char const *s, va_list ap);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);

#endif
