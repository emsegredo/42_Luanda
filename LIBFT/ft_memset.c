/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmsegre <edmsegre@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 14:57:16 by edmsegre          #+#    #+#             */
/*   Updated: 2026/08/14 16:50:36 by edmsegre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	valor;
	size_t			i;

	if (!s)
		return (NULL);
	ptr = (unsigned char *)s;
	valor = (unsigned char)c;
	i = 0;
	if (n == 0)
		return (s);
	while (i < n)
	{
		ptr[i] = valor;
		i++;
	}
	return (s);
}
