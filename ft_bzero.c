/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 20:22:05 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/22 11:02:46 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		ptr++;
		i++;
	}
}
/*
int	main(void)
{
	char	*s;

	s = malloc(7);

	int	i = 0;
	for (; i < 7 ; i++)
		s[i] = 'a';
	s[i] = '\0';

	printf("before: %s\n", s);

	ft_bzero((void *)s, 3);

	for (int j = 0; j < 7 ; j++)
		printf("%c", s[j]);

	return (0);
}*/
