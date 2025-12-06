#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char hex[16] = "0123456789abcdef";
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			ft_putchar('\\');
			ft_putchar(hex[*str / 16]);
			ft_putchar(hex[*str % 16]);
		}
		else 
			ft_putchar(*str);
		str++;
	}
}
