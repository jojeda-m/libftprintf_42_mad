/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:34:59 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/15 07:49:59 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			i += ft_parse(format + i, args, &printed);
		else
		{
			printed += write(1, &format[i], 1);
			if (printed < 0)
				return (-1);
			i++;
		}
	}
	va_end(args);
	return (printed);
}
