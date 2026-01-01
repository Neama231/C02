#include <unistd.h>

void	ft_print_address(unsigned char *ptr)
{
	unsigned int i;
	i = 0;
	char hex[16];
	unsigned long tmp;
	tmp = (unsigned long)ptr;
	while (i < 16)
	{
		hex[15 - i] = "0123456789abcdef"[tmp%16];
		tmp/=16;
		i++;
	}
	i = 0;
	while (i < 16)
		write (1, &hex[i++], 1);
	write(1, ":", 1);
	write(1, " ", 1);
}

void	ft_print_hex(unsigned char *ptr, unsigned int line_size)
{
	unsigned int j;
	j = 0;
	while (j < 16)
	{
		if(j < line_size)
		{
			write(1, &"0123456789abcdef"[ptr[j]/16], 1);
			write(1, &"0123456789abcdef"[ptr[j]%16], 1);
		}
		else
			write (1, "  ", 2);
		if(j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
}

void	ft_printable_characters(unsigned char *ptr, unsigned int size)
{
	while (size > 0)
	{
		if(*ptr >= 32 && *ptr <= 126)
			write(1, ptr, 1);
		else
			write(1, ".", 1);
		ptr++;
		size--;
	}
}

void	*ft_print_memory(void	*addr, unsigned int size)
{
	addr = (unsigned char*)addr;
	unsigned int line_size;
	unsigned int j;
	while (size > 0)
	{
		if (size > 16)
			line_size = 16;
		else
			line_size = size;

			ft_print_address(addr);
			ft_print_hex(addr, line_size);
			ft_printable_characters(addr, line_size);
			write(1, "\n", 1);
		addr+=line_size;
		size-=line_size;
		//write (1, "\n", 1);
	}
	return (addr);
}

int main()
{
	unsigned char *addr;
	addr = "Salut les aminches c'est cool show mem on fait de truc terrible.";
	ft_print_memory(addr, 64);
	//ft_print_address(addr);
	//ft_print_hex(addr, 6);
	//ft_printable_characters(addr, 6);
	//write(1, "\n", 1);
}
