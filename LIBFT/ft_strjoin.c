/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmsegre <edmsegre@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:46:38 by edmsegre          #+#    #+#             */
/*   Updated: 2026/08/06 10:51:13 by edmsegre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_string = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s1, s1_len + 1);
	ft_strlcat(new_string, s2, s1_len + s2_len + 1);
	return (new_string);
}
