#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i]+=32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;
	i = 0;
	flag = 1;//to know the beginning of a word 

	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 1)
				str[i]-=32;
			flag = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else 
			flag = 1;
		i++;
	}
	return (str);
}

int	main()
{
	char str[] = "hello my friend";
	printf("%s\n", ft_strcapitalize(str));
}
