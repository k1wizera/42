void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = swap;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
