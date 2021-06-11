#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src;
	char	*dest;
	
	src = calloc(11, sizeof(char));
	src = "12345678903";
	dest = calloc(5, sizeof(char));
	ft_strncpy(dest, src, 3);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	
	/*char	str1[] = "12345";
	char	str2[10];
		
	ft_strncpy(str2, str1, 15);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);*/
}

	
	
	