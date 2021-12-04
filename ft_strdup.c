#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	int		i;
	char	*new;

	i = 0;
	size = ft_strlen(s1);
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
