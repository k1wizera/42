#include <stdio.h>
void	ft_ft(int *nbr);

int	main (void)
{
	int	x;

	x = 44;
	ft_ft(&x);
	printf("%i", x);
}
