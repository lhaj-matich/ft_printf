#include "ft_printf.h"

int	ft_handle_specifier(va_list p_args, char sp)
{
	int counter;
	if (sp == 'd' || sp == 'i')
		counter = ft_printDigit(va_arg(p_args, int));
	if (sp == 'u')
		counter = ft_printuDigit(va_arg(p_args, unsigned int));
	if (sp == 'c')
		counter = ft_printChar(va_arg(p_args, int));
	if (sp == 's')
		counter = ft_printStr(va_arg(p_args, char *));
	if (sp == 'x')
		counter = ft_printHex(va_arg(p_args, unsigned int), _xbase);
	if (sp == 'X')
		counter = ft_printHex(va_arg(p_args, unsigned int), _Xbase);
	if (sp == 'p')
		counter = ft_printPointer(va_arg(p_args, unsigned long), _xbase);
	if (sp == '%')
		counter = ft_printPerc();
	return (counter);
}

int	ft_check_specifier(char c)
{
	int i;

	i = 0;
	while (_SPECIFIERS[i] != '\0')
	{
		if (_SPECIFIERS[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int counter;
	int i;

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
		{
			ft_putchar(format[i]);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}
