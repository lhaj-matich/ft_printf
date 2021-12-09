/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:31:08 by ochoumou          #+#    #+#             */
/*   Updated: 2021/12/09 22:11:55 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H_
# define FT_PRINTF_H_

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# define _SPECIFIERS "cspdiuxX%"
# define _Xbase "0123456789ABCDEF"
# define _Sbase "0123456789abcdef"

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int n);
int		ft_putnbr_base(unsigned long nbr, char *base);
int		ft_printf(const char *format, ...);
int		ft_strlen(const char *str);
int		ft_print_char(int c);
int		ft_print_str(char *s);
int		ft_print_digit(int n);
int		ft_print_udigit(unsigned int n);
int		ft_print_hex(unsigned int number, char *base);
int		ft_print_perc(void);
int		ft_print_pointer(unsigned long n, char *base);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);

#endif
