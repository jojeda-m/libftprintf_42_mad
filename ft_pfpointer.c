/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfpointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:59:19 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/21 13:20:39 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_ptr_addr(uintptr_t pointer)
{
	int			printed;
	char		dighex;
	const char	*hex_low;

	if (pointer == 0)
		return (0);
	printed = 0;
	hex_low = "0123456789abcdef";
	if (pointer / 16 > 0)
		printed += ft_ptr_addr(pointer / 16);
	dighex = hex_low[pointer % 16];
	printed += ft_pfputchar(dighex);
	return (printed);
}

int	ft_pfpointer(void *pointer)
{
	int	printed;

	if (pointer == NULL)
		return (ft_pfputstr("(nil)"));
	printed = 0;
	printed += ft_pfputstr("0x");
	printed += ft_ptr_addr((uintptr_t)pointer);
	return (printed);
}
