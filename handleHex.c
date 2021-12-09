/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleHex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:03:05 by ochoumou          #+#    #+#             */
/*   Updated: 2021/12/09 21:03:26 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int number, char *base)
{
	if (number == 0)
	{
		ft_putnbr(0);
		return (1);
	}
	return (ft_putnbr_base(number, base));
}
