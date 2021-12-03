#include "ft_printf.h"

int	ft_printdigit(int n)
{
	char *number;
	int len;

	number = ft_itoa(n);
	len = ft_strlen(number);
	ft_putstr(number);
	free(number);
	return (len);
}
