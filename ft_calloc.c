/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 01:22:33 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/22 11:06:12 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*res;
	int		i;
	long	len;

	len = nmemb * size;
	if (len >= INT_MAX)
		return (NULL);
	if (len == 0)
		return (malloc(0));
	res = malloc(len);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = '\0';
		i++;
	}
	return ((void *)res);
}
