/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:28:55 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/21 13:21:24 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hextoi(int n)
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
	ft_pfputnbr(decimal);
	return (ft_nbrlen(decimal));
}
