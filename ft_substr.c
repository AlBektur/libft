/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:38:26 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/24 00:49:00 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	size_t		j;

	j = start;
	while (s[j])
		j++;
	if ((j - start) < len)
		len = j - start;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	j = 0;
	while (j < len)
	{
		res[j] = s[start];
		j++;
		start++;
	}
	res[j] = '\0';
	return (res);
}
