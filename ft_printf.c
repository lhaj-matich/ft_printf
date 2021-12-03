#include "ft_printf.h"

int	ft_handle_specifier(va_list p_args, char sp)
{
	int counter;
	if (sp == 'd' || sp == 'i')
		counter = ft_printdigit(va_arg(p_args, int));
	if (sp == 'u')
		counter = ft_printudigit(va_arg(p_args, unsigned int));
	if (sp == 'c')
		counter = ft_printchar(va_arg(p_args, int));
	if (sp == 's')
		counter = ft_printstr(va_arg(p_args, char *));
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

int main(void)
{
	int count = ft_printf("The number %u\n", -13822);	
	int count2 = printf("The number %u\n", -13822);	
	printf("%d\n",count);
	printf("%d\n",count2);
	return (0);
}
