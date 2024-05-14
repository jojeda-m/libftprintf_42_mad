/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:16:16 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/26 14:49:33 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		i;

	i = 0;
	if (n == INT_MIN)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
		}
		while (n != 0)
		{
			str[i++] = n % 10 + '0';
			n /= 10;
		}
	}
	while (i > 0)
		write(fd, &str[--i], 1);
}
