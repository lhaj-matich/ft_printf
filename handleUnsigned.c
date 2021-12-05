#include "ft_printf.h"

int	ft_printuDigit(unsigned int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	return (ft_putnbr(n));	
}

