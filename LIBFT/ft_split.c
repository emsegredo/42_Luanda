/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmsegre <edmsegre@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 09:14:47 by edmsegre          #+#    #+#             */
/*   Updated: 2026/08/06 12:06:38 by edmsegre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	counter(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

static void	*memrelease(char **mem, size_t i)
{
	while (i > 0)
		free(mem[--i]);
	free(mem);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	char	*len;
	size_t	i;

	if (!s)
		return (NULL);
	splited = (char **)malloc(sizeof(char *) * (counter(s, c) + 1));
	if (!splited)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		len = ft_strchr(s, c);
		if (!len)
			len = ft_strchr(s, '\0');
		splited[i++] = ft_substr(s, 0, len - s);
		if (!splited[i - 1])
			return (memrelease(splited, i - 1));
		s = len;
	}
	return (splited[i] = NULL, splited);
}
