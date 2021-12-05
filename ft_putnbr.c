#include "ft_printf.h"

int	ft_putnbr(unsigned int n)
{
	unsigned long	number;
	static int i;

	number = n;
	if (number < 0)
	{
		ft_putchar('-');
		number = number * -1;
	}
	if (number < 10)
	{
		ft_putchar(number + '0');
		i += 1;
	}
	else
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	return (i);
}
