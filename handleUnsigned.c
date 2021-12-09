/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleUnsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:07:58 by ochoumou          #+#    #+#             */
/*   Updated: 2021/12/09 23:00:07 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_calculate_length(unsigned int n)
{
	unsigned long	number;
	int				length;

	length = 0;
	number = n;
	if (n < 0)
		number = n * -1;
	while (number)
	{
		number = number / 10;
		length++;
	}
	return (length);
}

int	ft_print_udigit(unsigned int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	ft_putnbr(n);
	return (ft_calculate_length(n));
}
