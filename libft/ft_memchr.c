/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:32:20 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/26 14:25:28 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		mem_c;
	const unsigned char	*str;

	mem_c = (unsigned char)c;
	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == mem_c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
