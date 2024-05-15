/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:21:26 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/15 08:09:51 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_pfputstr(char *str)
{
	int	i;

	if (!str)
	{
		i = 4;
		write(1, "null", i);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	return (i);
}
