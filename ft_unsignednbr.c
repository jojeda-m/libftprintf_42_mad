/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignednbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:35:31 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/21 06:41:14 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unsignednbr(int n)
{
	unsigned int	x;
	char			str[11];
	int				len;

	if (n >= 0)
		return (ft_pfputnbr(n));
	x = UINT_MAX - (unsigned int)-n + 1;
	len = ft_nbrlen(x);
	str[len] = '\0';
	while (x != 0)
	{
		str[--len] = x % 10 + '0';
		x /= 10;
	}
	return (ft_pfputstr(str));
}
