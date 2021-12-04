#include "ft_printf.h"

int	ft_printStr(char *s)
{
	int len;
	if (!s)
	{
		write(1,"(null)",6);
		return (6);
	}
	len = ft_strlen(s);
	ft_putstr(s);
	return (len);
}
