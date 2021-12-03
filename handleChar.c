#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1,&c,1);
	return (1);
}
