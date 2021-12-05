#include "ft_printf.h"

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i] || str[j] == '-' || str[j] == '+'
				|| is_space(str[j]) || (str[j] >= 0 && str[j] <= 31))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int		i;
	int		result[100];
	int		save;

	i = 0;
	save = 0;
	if (ft_check_base(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * -1;
		}
		while (nbr)
		{
			result[i] = nbr % ft_strlen(base);
			nbr = nbr / ft_strlen(base);
			i++;
		}
		save = i;
		while (--i >= 0)
			ft_putchar(base[result[i]]);
	}
	return (save);
}
