/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:03:11 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/26 14:21:43 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	orig_dst;

	if (dstsize == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	if (dstsize < len_dst)
		return (ft_strlen(src) + dstsize);
	len_src = 0;
	orig_dst = len_dst;
	while (len_dst < dstsize - 1 && src[len_src] != '\0')
		dst[len_dst++] = src[len_src++];
	dst[len_dst] = '\0';
	return (ft_strlen(src) + orig_dst);
}
