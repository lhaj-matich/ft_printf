/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:16:14 by ochoumou          #+#    #+#             */
/*   Updated: 2021/12/09 22:58:21 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <stdlib.h>

static int	ft_get_length(int n)
{
	int	length;

	if (n > 0)
		length = 0;
	else
		length = 1;
	while (n)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

static char	*ft_assign_number(char *str, int n)
{
	long	number;
	int		rem;
	int		len;
	int		i;

	i = 0;
	number = n;
	len = ft_get_length(n);
	if (number < 0)
	{
		str[i++] = '-';
		number *= -1;
	}
	while (number)
	{
		rem = number % 10;
		str[--len] = rem + '0';
		number = number / 10;
	}
	str[ft_get_length(n)] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;

	if (n == 0)
		return (ft_strdup("0\0"));
	length = ft_get_length(n);
	str = (char *)malloc((sizeof(char) * (length + 1)));
	if (!str)
		return (NULL);
	return (ft_assign_number(str, n));
}
