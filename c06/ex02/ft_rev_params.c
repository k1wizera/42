#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	p;

	p = argc - 1;
	while (p > 0)
	{
		i = 0;
		while (argv[p][i] != '\0')
		{
			write (1, &argv[p][i], 1);
			i++;
		}
		write (1, "\n", 1);
		p--;
	}
	return (0);
}
