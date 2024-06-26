/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:48:45 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/21 15:12:01 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_parse(const char *format, va_list args, int *printed)
{
	int	n;

	n = 2;
	if (format[1] == 'c')
		*printed += ft_pfputchar(va_arg(args, int));
	else if (format[1] == 's')
		*printed += ft_pfputstr(va_arg(args, char *));
	else if (format[1] == 'p')
		*printed += ft_pfpointer(va_arg(args, void *));
	else if (format[1] == 'd' || format[1] == 'i')
		*printed += ft_pfputnbr(va_arg(args, int));
	else if (format[1] == 'u')
		*printed += ft_unsignednbr(va_arg(args, int));
	else if (format[1] == 'x')
		*printed += ft_itohex(va_arg(args, int), 0);
	else if (format[1] == 'X')
		*printed += ft_itohex(va_arg(args, int), 1);
	else if (format[1] == '%')
		*printed += ft_pfputchar('%');
	else
		n = 1;
	return (n);
}
