#include "ft_printf.h"

void	ft_putnbr(unsigned int n)
{
	unsigned long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar('-');
		number = number * -1;
	}
	if (number < 10)
	{
		ft_putchar(number + '0');
	}
	else
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}
