int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power > 0)
	{
		nb = nb * ft_recursive_power(nb, (power - 1));
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
