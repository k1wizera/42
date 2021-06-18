int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (power > 0)
	{
		while (i < power)
		{
			nb *= j;
			i++;
		}
	}
	else if (power == 0)
	{
		nb = 1;
	}
	else
	{
		nb = 0;
	}
	return (nb);
}
