/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmsegre <edmsegre@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 20:57:23 by edmsegre          #+#    #+#             */
/*   Updated: 2026/08/14 16:00:30 by edmsegre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*conv1;
	const unsigned char		*conv2;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	if (n == 0)
		return (0);
	i = 0;
	conv1 = (unsigned const char *)s1;
	conv2 = (unsigned const char *)s2;
	while (i < n)
	{
		if (conv1[i] != conv2[i])
			return (conv1[i] - conv2[i]);
		i++;
	}
	return (0);
}
