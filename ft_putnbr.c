/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:52:42 by ochoumou          #+#    #+#             */
/*   Updated: 2021/12/09 20:52:58 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(unsigned int n)
{
	unsigned long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar('-');
		number = number * -1;
	}
	if (number < 10)
		ft_putchar(number + '0');
	else
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}
