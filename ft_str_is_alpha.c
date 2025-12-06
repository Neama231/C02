#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	while (str[i] && !((str[i] >= 'a' && str[i] <= 'z') ||( str[i] >= 'A' && str[i] <= 'Z')))
	{
		i++;
		return (0);
	}
	return (1);
}

int	main()
{
	//ft_str_is_alpha("s");
	printf("return (%d)\n", ft_str_is_alpha(""));
}
