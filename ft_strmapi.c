/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:19:44 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/23 14:49:52 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	f(unsigned int i, char c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*res;

	len = ft_strlen(s);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(int argc, char *argv[])
{
	char *str = ft_strmapi(argv[1], &f);

	printf("%s\n", str);
	return (0);
}*/
