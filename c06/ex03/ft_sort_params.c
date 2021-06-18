#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	print_params(int argc, char **argv)
{
	int	i;
	int	p;

	p = 1;
	while (p < argc)
	{
		i = 0;
		while (argv[p][i] != '\0')
		{
			ft_putchar(argv[p][i]);
			i++;
		}
		p++;
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int		p;
	int		i;
	char	*tmp;

	p = 1;
	if (argc < 2)
		return (0);
	while (p < argc)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		p++;
	}
	print_params(argc, argv);
}
