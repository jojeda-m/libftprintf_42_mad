/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:24:39 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/26 14:24:06 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	ch;

	ch = (char)c;
	last = NULL;
	if (ch == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == ch)
			last = (char *)s;
		s++;
	}
	return (last);
}
