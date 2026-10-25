/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmsegre <edmsegre@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 14:59:30 by edmsegre          #+#    #+#             */
/*   Updated: 2026/08/14 16:04:04 by edmsegre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	if (!s)
		return (NULL);
	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}
