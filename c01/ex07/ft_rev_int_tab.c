void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		swap = tab[size];
		tab[size] = tab[i];
		tab[i] = swap;
		i++;
		size--;
	}
}
