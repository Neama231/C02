#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src [i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int 	main()
{
	char dest[30];
	char src[30] = "MY NAME IS SHIT!";
	src[6] = 'O';
	unsigned int nb = 7;
	printf("dest[%u] = (%s)\n", nb, ft_strncpy(dest, src, nb));
}
