/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 22:32:07 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/22 11:46:52 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*d;
	const unsigned char		*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char s[10] = {'b','a','r','c','e','l','o','n','a','\0'};
	char s2[10] = {'b','a','r','c','e','l','o','n','a','\0'};

	printf("or: %s\n", s);

	ft_memmove((void *)&s[0], (const void *)&s[3], 5);
	printf("to the begginig: %s\n", s);

	ft_memmove((void *)&s2[3], (const void *)&s2[0], 5);
	printf("to the back: %s\n", s2);


	return (0);
}*/
