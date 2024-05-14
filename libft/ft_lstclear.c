/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:49:54 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/26 14:52:42 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_next;

	if (lst && del)
	{
		while (*lst)
		{
			temp_next = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = temp_next;
		}
	}
}
