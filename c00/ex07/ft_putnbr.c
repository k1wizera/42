#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_rules(int nb)
{
	int	mod;
	int	reverse[10];
	int	position;

	position = -1;
	while (nb > 0)
	{
		position++;
		mod = nb % 10;
		nb = nb / 10;
		reverse[position] = mod;
	}
	while (position >= 0)
	{
		ft_putchar('0' + reverse[position]);
		position--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write (1, "0", 1);
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb == -2147483648)
	{
		write (1, "2147483648", 11);
	}
	ft_rules(nb);
}
