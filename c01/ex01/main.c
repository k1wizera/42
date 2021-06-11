#include <stdio.h>
void	ft_ultimate_ft(int *********nbr);

int	main (void)
{
	int	x;
	int	*pointer1;
	int	**pointer2;
	int	***pointer3;
	int	****pointer4;
	int	*****pointer5;
	int	******pointer6;
	int	*******pointer7;
	int	********pointer8;
	int	*********pointer9;

	x = 55;
	pointer1 = &x;
	pointer2 = &pointer1;
	pointer3 = &pointer2;
	pointer4 = &pointer3;
	pointer5 = &pointer4;
	pointer6 = &pointer5;
	pointer7 = &pointer6;
	pointer8 = &pointer7;
	pointer9 = &pointer8;
	printf("%d", x);
	printf("\n");
	ft_ultimate_ft(pointer9);
	printf("%d", x);
	printf("\n");
}
