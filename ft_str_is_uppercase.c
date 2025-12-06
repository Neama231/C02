#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else 
			return (0);
	}
	return (1);
}

int	main()
{
	printf("return (%d)\n", ft_str_is_uppercase("dadhjsyew"));
}
