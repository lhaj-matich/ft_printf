#include "ft_printf.h"

int	ft_printHex(unsigned int number, char *base)
{
	if (number == 0)
	{
		ft_putnbr(0);
		return (1);
	}
	return (ft_putnbr_base(number, base));
}
