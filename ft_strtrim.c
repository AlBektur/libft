/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:35:20 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/22 15:58:30 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_inset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	def_len(char *s1, char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (is_inset(s1[i], set))
		i++;
	i--;
	while (s1[j])
		j++;
	j--;
	while (is_inset(s1[j], set))
		j--;
	return (j - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	int		k;
	char	*res;

	len = def_len((char *)s1, (char *)set);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	k = 0;
	i = 0;
	while (is_inset(s1[i], (char *)set))
		i++;
	while (k < len)
	{
		res[k] = s1[i];
		k++;
		i++;
	}
	res[k] = '\0';
	return (res);
}
/*
int	main(int argc, char *argv[])
{
	ft_strtrim(argv[1], argv[2]);

	return (0);
}*/
