/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 22:24:31 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/17 00:11:56 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_hextoi(int n)
{
	int	decimal;
	int	base;
	int	res;

	decimal = 0;
	base = 1;
	while (n != 0)
	{
		res = n % 16;
		decimal += res * base;
		n /= 16;
		base *= 16;
	}
	return (decimal);
}

int	ft_int_type(int n)
{
	int		dec;

	dec = ft_hextoi(n);
	ft_pfputnbr(dec);
	return (ft_intlength(dec));
}
