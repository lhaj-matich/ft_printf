#include "printf.h"
#include <stdio.h>

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
				counter = ft_handle_specifier(args, format[i]);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (0);
}

int main(void)
{
	return (0);
}
