/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:16:43 by ochoumou          #+#    #+#             */
/*   Updated: 2021/12/09 22:58:35 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_specifier(va_list p_args, char sp)
{
	int	counter;

	if (sp == 'd' || sp == 'i')
		counter = ft_print_digit(va_arg(p_args, int));
	if (sp == 'u')
		counter = ft_print_udigit(va_arg(p_args, unsigned int));
	if (sp == 'c')
		counter = ft_print_char(va_arg(p_args, int));
	if (sp == 's')
		counter = ft_print_str(va_arg(p_args, char *));
	if (sp == 'x')
		counter = ft_print_hex(va_arg(p_args, unsigned int), _Sbase);
	if (sp == 'X')
		counter = ft_print_hex(va_arg(p_args, unsigned int), _Xbase);
	if (sp == 'p')
		counter = ft_print_pointer(va_arg(p_args, unsigned long), _Sbase);
	if (sp == '%')
		counter = ft_print_perc();
	return (counter);
}

int	ft_check_specifier(char c)
{
	int	i;

	i = 0;
	while (_SPECIFIERS[i] != '\0')
	{
		if (_SPECIFIERS[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_write_letter(char c, int i)
{
	ft_putchar(c);
	return (i + 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;
	int		i;

	va_start(args, format);
	counter = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i += 1;
			while (format[i] == ' ')
				i++;
			if (ft_check_specifier(format[i]))
				counter += ft_handle_specifier(args, format[i]);
		}
		else
			counter = ft_write_letter(format[i], counter);
		i++;
	}
	va_end(args);
	return (counter);
}
