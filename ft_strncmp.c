/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:24:06 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/22 02:26:29 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	j;

	j = 0;
	i = 0;
	while (j < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		j++;
	}
	return (0);
}
