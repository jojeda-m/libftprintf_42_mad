/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:14:11 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/15 08:12:29 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_itohex(int n, int low_up)
{
	int			printed;
	const char	*lower_hex;
	char		hex_char;

	lower_hex = "0123456789abcdef";
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n == INT_MIN)
	{
		write(1, "-80000000", 9);
		return (9);
	}
	if (n < 0)
		n = -n;
	hex_char = lower_hex[n % 16];
	if (low_up != 0)
		hex_char = ft_toupper(hex_char);
	printed = ft_itohex(n / 16, low_up);
	write(1, &hex_char, 1);
	return (printed + 1);
}
