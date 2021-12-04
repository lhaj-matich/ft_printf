#include "ft_printf.h"

int	ft_printHex(unsigned int number, char *base)
{
	ft_putnbr_base(number,base);
	return (ft_count_length(number, 16));
}
