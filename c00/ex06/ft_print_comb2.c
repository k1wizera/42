#include <unistd.h>

void	ft_print(int i, int j, int k, int p)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &p, 1);
	if (i == '9' && j == '8' && k == '9' && p == '9')
	{
	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	rules(int i, int j, int k, int p)
{
	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				while (p <= '9')
				{
					ft_print(i, j, k, p);
					p++;
				}
				k++;
				p = '0';
			}
			j++;
			k = i;
			p = j + 1;
		}
		i++;
		j = '0';
		k = j;
		p = j + 1;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	p;

	i = '0';
	j = '0';
	k = '0';
	p = '1';
	rules(i, j, k, p);
}
