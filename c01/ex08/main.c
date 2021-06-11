#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	size = 9;
	int	arr[9] = {4, -15, -5, 8, 7, 9, 31, 3, 2};
	int	*ptr = arr;

	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8]);
	printf("\n");
	ft_sort_int_tab(ptr, size);
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8]);
	printf("\n");
	return (0);
}
