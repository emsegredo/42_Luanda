/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmsegre <edmsegre@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 14:59:11 by edmsegre          #+#    #+#             */
/*   Updated: 2026/08/14 16:18:13 by edmsegre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	if (!s1 && !s2)
		return (0);
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
