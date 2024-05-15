/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:17:44 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/15 08:13:19 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_pfputnbr(int n)
{
	int		i;
	char	*nbr;

	nbr = ft_itoa(n);
	i = 0;
	while (nbr[i] != '\0')
		write(1, &nbr[i++], 1);
	free(nbr);
	return (i);
}
