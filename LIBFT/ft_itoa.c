/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmsegre <edmsegre@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:22:34 by edmsegre          #+#    #+#             */
/*   Updated: 2026/08/05 20:16:18 by edmsegre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	word_len(long l)
{
	int	len;

	len = 0;
	if (l <= 0)
		len = 1;
	while (l != 0)
	{
		l /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size;
	long	num;

	num = n;
	size = word_len(num);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	if (num == 0)
		ptr[0] = '0';
	if (num < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		size--;
		ptr[size] = (num % 10) + '0';
		num /= 10;
	}
	return (ptr);
}
