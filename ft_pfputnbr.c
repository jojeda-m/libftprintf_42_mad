/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:17:44 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/16 23:03:58 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_pfputnbr(int n)
{
	char	str[12];
	int		i;

	i = ft_intlength(n);
	if (n == INT_MIN)
		return (ft_pfputstr("-2147483648"));
	else if (n == 0)
		return (ft_pfputchar('0'));
	else
	{
		if (n < 0)
		{
			n = -n;
			str[0] = '-';
		}
		str[i--] = '\0';
		while (n != 0)
		{
			str[i--] = n % 10 + '0';
			n /= 10;
		}
	}
	return (ft_pfputstr(str));
}
