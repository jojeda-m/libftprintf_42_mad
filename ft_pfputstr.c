/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:21:26 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/21 13:03:56 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_pfputstr(char *str)
{
	int	len;

	if (!str)
	{
		len = 6;
		write(1, "(null)", len);
	}
	else
	{
		len = 0;
		while (str[len])
		{
			ft_pfputchar(str[len]);
			len++;
		}
	}
	return (len);
}
