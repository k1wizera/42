int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb > 0)
	{
		while (i > 0)
		{
			nb *= i;
			i--;
		}
	}
	else if (nb == 0)
	{
		nb = 1;
	}
	else
	{
		nb = 0;
	}
	return (nb);
}
