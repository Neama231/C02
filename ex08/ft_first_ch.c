#include <unistd.h>

void	print_hex_memory(unsigned char *ptr)
{
	char hex[16];
	int i;
	unsigned long nb;
	i = 0;
	nb = (unsigned long)(ptr + i);
	while (i < 16)
	{
		hex[15 - i] = "0123456789abcdef"[nb % 16];
		nb/=16;
		i++;
	}
	i = 0;
	while (i < 16)
		write (1, &hex[i++], 1);
	write (1, ":", 1);
}

int main()
{
	print_hex_memory("salut!");
}

