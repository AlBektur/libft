/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:35:20 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/25 01:55:57 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:58:48 by bsaipidi          #+#    #+#             */
/*   Updated: 2025/10/12 04:44:28 by bsaipidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	flag;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				flag = 1;
			}
			j++;
		}
		if (!flag)
			return (i);
		i++;
	}
	return (i);
}

static int	ft_end(char const *s1, char const *set)
{
	int			i;
	size_t		j;
	size_t		flag;

	i = (int )ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		flag = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				flag = 1;
			j++;
		}
		if (!flag)
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	ssize_t	i;
	ssize_t	j;
	size_t	k;

	i = ft_start(s1, set);
	j = ft_end(s1, set) + 1;
	if (!s1[i] || j - i < 0)
		return (ft_strdup(""));
	res = malloc(j - i + 1);
	if (res == NULL)
		return (NULL);
	k = 0;
	while (i < j)
	{
		res[k] = s1[i];
		k++;
		i++;
	}
	res[k] = '\0';
	return (res);
}
