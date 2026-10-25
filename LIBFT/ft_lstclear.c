/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmsegre <edmsegre@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 20:59:46 by edmsegre          #+#    #+#             */
/*   Updated: 2026/08/10 21:05:11 by edmsegre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now;
	t_list	*than;

	if (!lst || !del)
		return ;
	now = *lst;
	while (now != NULL)
	{
		than = now->next;
		ft_lstdelone(now, del);
		now = than;
	}
	*lst = NULL;
}
