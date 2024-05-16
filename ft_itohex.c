/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:14:11 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/17 00:12:32 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_pftoupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	ft_itohex(unsigned int n, int low_up)
{
	int				printed;
	const char		*lower_hex;
	char			hex_char;

	lower_hex = "0123456789abcdef";
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	printed = 0;
	if (n / 16 > 0)
		printed = ft_itohex(n / 16, low_up);
	hex_char = lower_hex[n % 16];
	if (low_up != 0)
		hex_char = ft_pftoupper(hex_char);
	write(1, &hex_char, 1);
	return (printed + 1);
}
