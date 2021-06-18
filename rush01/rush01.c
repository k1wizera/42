#include <stdio.h>
void	mount_matrix(char *argv)
{
	char	matrix[16];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] != ' ')
		{
			matrix[j] = argv[i];
			j++;
		}
		i++;
	}
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", matrix[0], matrix[1], matrix[2], matrix[3], matrix[4], matrix[5], matrix[6], matrix[7], matrix[8], matrix[9], matrix[10], matrix[11], matrix[12], matrix[13], matrix[14], matrix[15]);
}
