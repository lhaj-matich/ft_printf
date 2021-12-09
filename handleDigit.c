/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleDigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:59:10 by ochoumou          #+#    #+#             */
/*   Updated: 2021/12/09 22:59:14 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(int n)
{
	char	*number;
	int		len;

	number = ft_itoa(n);
	len = ft_strlen(number);
	ft_putstr(number);
	free(number);
	return (len);
}
