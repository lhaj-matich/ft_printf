/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlePointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:04:22 by ochoumou          #+#    #+#             */
/*   Updated: 2021/12/09 21:05:16 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long n, char *base)
{
	if (n == 0)
	{
		ft_putstr("0x0");
		return (3);
	}
	ft_putstr("0x");
	return (ft_putnbr_base(n, base) + 2);
}
