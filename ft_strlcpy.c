#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len_src;
	unsigned int i;
	i = 0;
	len_src = 0;
	while (src[i])
	{
		len_src++;
		i++;
	}
	if (size == 0)
		return (len_src);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}

int	main()
{
	char dest[30];
	char src[30] = "MY NAME IS, my name is";
	unsigned int size = 20;//the size of the destination buffer
	printf("dest [%u] = (%u)\n", size, ft_strlcpy(dest, src, size));
}
