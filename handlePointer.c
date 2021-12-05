#include "ft_printf.h"

int		ft_printPointer(unsigned long n, char *base)
{
	if (n == 0)
	{
		ft_putstr("0x0");
		return (3);
	}
	ft_putstr("0x");
	return (ft_putnbr_base(n, base) + 2);
}
