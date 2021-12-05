#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{

	int count = ft_printf("%u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n");
	int count2 = printf("%u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n");
	printf("%d\n",count);
	printf("%d\n",count2);
	return (0);
}
