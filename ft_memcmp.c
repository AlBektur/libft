/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 22:49:22 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/24 04:11:09 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t						i;
	const unsigned char			*src_1;
	const unsigned char			*src_2;

	i = 0;
	src_1 = (const unsigned char *)s1;
	src_2 = (const unsigned char *)s2;
	while (i < n && (src_1[i] || src_2[i]))
	{
		if ((unsigned char)src_1[i] != (unsigned char)src_2[i])
			return ((unsigned char)src_1[i] - (unsigned char)src_2[i]);
		i++;
	}
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	printf("or: %d\n", memcmp(argv[1], argv[2], ft_atoi(argv[3])));
	printf("ft: %d\n", ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}*/
