/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:01:36 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/24 03:33:41 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcounter(char const *s, char c)
{
	int	i;
	int	counter;
	int	flag;

	i = 0;
	flag = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c && flag == 1)
			flag = 0;
		else if (s[i] != c && flag == 0)
		{
			counter++;
			flag = 1;
		}
		i++;
	}
	return (counter);
}

char	*substr(char const *s, int start, int end)
{
	char	*res;
	int		i;
	int		len;

	len = end - start;
	res = malloc(sizeof(char) * ((len + 1)));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

void	ft_cleaner(char **res, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

void	fill(char **res, char const *s, char c, int len)
{
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	while (i < (len - 1))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c)
			end++;
		res[i] = substr(s, start, end);
		if (res[i] == NULL)
		{
			ft_cleaner(res, len);
			return ;
		}
		start = end;
		i++;
	}
	res[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	int			len;

	len = ft_wordcounter(s, c);
	res = malloc(sizeof(char *) * (len + 1));
	if (!res)
		return (NULL);
	fill(res, s, c, (len + 1));
	return (res);
}
/*
int	main(int argc, char *argv[])
{
	int i = ft_wordcounter(argv[1], argv[2][0]);

	ft_split(argv[1], argv[2][0]);
	printf("%d\n", i);
	return (0);
}*/
