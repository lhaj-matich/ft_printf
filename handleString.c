/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleString.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:05:58 by ochoumou          #+#    #+#             */
/*   Updated: 2021/12/09 21:07:24 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	len;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(s);
	ft_putstr(s);
	return (len);
}
