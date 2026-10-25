/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmsegre <edmsegre@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 14:56:30 by edmsegre          #+#    #+#             */
/*   Updated: 2026/08/14 15:33:55 by edmsegre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*conv;
	size_t				i;

	if (!s)
		return (NULL);
	conv = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (conv[i] == (unsigned char)c)
			return ((void *)&conv[i]);
		i++;
	}
	return (NULL);
}
