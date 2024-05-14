/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:06:01 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/26 14:18:57 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	const char	*ptr_src;
	char		*ptr_dst;

	ptr_src = src;
	ptr_dst = dst;
	i = 0;
	if (ptr_src > ptr_dst)
	{
		while (len > 0)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
			len--;
		}
	}
	if (ptr_src < ptr_dst)
	{
		while (len > 0)
		{
			ptr_dst[len - 1] = ptr_src[len - 1];
			len--;
		}
	}
	return (dst);
}
