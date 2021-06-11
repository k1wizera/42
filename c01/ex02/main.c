#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main (void)
{
	int	z;
	int	k;

	z = 14;
	k = 1215;
	ft_swap(&z, &k);
	printf("%d\n", z);
	printf("%d\n", k);
}
