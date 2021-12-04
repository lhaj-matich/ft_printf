int	ft_count_length(int n, int base)
{
	int len;

	len = 0;
	while (n)
	{
		n = n / base;
		len++;
	}
	return (len);
}
