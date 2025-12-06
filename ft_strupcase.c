#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i]-= 32;
		i++;
	}
	return(str);
}

int main()
{
	char str[] = "asdfgGGHH";//u can't use string literal cuz it's unmodifiable
	printf("%s\n", ft_strupcase(str));
}
