int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		nb *= ft_recursive_factorial(nb - 1);
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
