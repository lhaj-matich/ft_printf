#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int count = ft_printf("%x\n",3);
	ft_printf("%d\n",count);
	return (0);
}
