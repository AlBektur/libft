/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:14:54 by besaipid          #+#    #+#             */
/*   Updated: 2026/09/24 04:29:43 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// to count the digits

int	counter(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_reverse(char *str)
{
	size_t		start;
	size_t		end;
	size_t		len;
	char		temp;

	len = ft_strlen(str);
	len--;
	end = len;
	start = 0;
	while (start <= (len / 2))
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
}

void	ft_fill(char *res, long n, int i, long sign)
{
	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		res[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	if (sign < 0)
	{
		res[i] = n % 10 + '0';
		i++;
		res[i] = '-';
		i++;
		res[i] = '\0';
	}
	else
	{
		res[i] = n % 10 + '0';
		i++;
		res[i] = '\0';
	}
}

char	*ft_itoa(int n)
{
	char		*res;
	int			i;
	long		sign;
	long		nb;

	i = 0;
	nb = (long)n;
	sign = nb;
	res = malloc(sizeof(int) * (counter(nb) + 1));
	if (res == NULL)
		return (NULL);
	ft_fill(res, nb, i, sign);
	ft_reverse(res);
	return (res);
}
/*
int	main(int argc, char *argv[])
{
	int res = counter(ft_atoi(argv[1]));
	printf("number of digits: %d\n", res);

	int	n = ft_atoi(argv[1]);
	char *str = ft_itoa(n);

	printf("res: %s\n", str);

	return (0);
}*/
