/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 23:19:52 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/24 03:00:41 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	src_len;
	size_t	j;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	if (siz == 0)
		return (src_len);
	while (dst[j])
		j++;
	while (src[i] && j + i < siz - 1)
	{
		dst[i + j] = src[i];
		i++;
	}
	if (i < siz)
		dst[j + i] = '\0';
	if (j > siz)
		return (src_len + siz);
	return (j + src_len);
}
