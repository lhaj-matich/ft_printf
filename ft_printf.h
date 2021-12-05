#ifndef PRINTF_H_
# define PRINTF_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#define _SPECIFIERS "cspdiuxX%"
#define _Xbase "0123456789ABCDEF"
#define _xbase "0123456789abcdef"

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_putnbr(unsigned int n);
int		ft_putnbr_base(unsigned long nbr, char *base);
int		ft_printf(const char *format, ...);
int		ft_strlen(const char *str);
int		ft_printChar(int c);
int		ft_printStr(char *s);
int		ft_printDigit(int n);
int		ft_printuDigit(unsigned int n);
int		ft_printHex(unsigned int number, char *base);
int		ft_printPerc();
int		ft_printPointer(unsigned long n, char *base);
int		ft_count_length(int n, int base);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);

#endif
