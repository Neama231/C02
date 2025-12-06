#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_hex(unsigned char c)//to get the correct hex we need 0-255 range
{
	char hex[16] = "0123456789abcdef";
	char nibble[2];

	nibble[0] = hex[c / 16];//hex=table / print high nibble
	nibble[1] = hex[c % 16];//print = low nibble
	
	ft_putchar('\\');//escape character \
	write (1, nibble, 2);
	
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	i = 0;
	//ft_print_hex("\n");
	while (str[i] != 0)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			ft_print_hex(str[i]);
		else 
			ft_putchar(str[i]);
		i++;
	}
}


int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write (1, "\n", 1);
	//write (1, "\n", 1);
}
