/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmsegre <edmsegre@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 10:48:21 by edmsegre          #+#    #+#             */
/*   Updated: 2026/08/14 16:22:50 by edmsegre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_l;
	size_t	i;

	if (!big || !little)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	len_l = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && (i + len_l) <= len)
	{
		if (ft_strncmp(&big[i], little, len_l) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
