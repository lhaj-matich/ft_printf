#ifndef PRINTF_H_
# define PRINTF_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#define _SPECIFIERS "cspdiuxX"
#define _Xbase "0123465789ABCDEF"
#define _xbase "0123456789abcdef"

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(const char *str);
int		ft_printchar(int c);
int		ft_printstr(char *s);
int		ft_printdigit(int n);
int		ft_printudigit(unsigned int n);
int		ft_count_length(int n);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);

#endif
