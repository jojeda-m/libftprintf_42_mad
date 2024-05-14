/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:20:39 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/26 14:17:42 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;

	if (dst == NULL && src == NULL)
		return (NULL);
	ptr_src = (unsigned char *)src;
	ptr_dst = (unsigned char *)dst;
	while (n-- > 0)
		*ptr_dst++ = *ptr_src++;
	return (dst);
}
