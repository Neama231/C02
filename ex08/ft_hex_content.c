#include <unistd.h>

void	ft_print_memory(unsigned char *ptr, unsigned int size)
{
	unsigned int line_size;
	int j;
	while (size > 0)
	{
		if (size > 16)
			line_size = 16;
		else
			line_size = size;

	j = 0;
	while (j < 16)
	{
		if (j < line_size)
		{
		       	write (1, &"0123456789abcdef"[ptr[j]/16], 1);
			write (1, &"0123456789abcdef"[ptr[j]%16], 1);
		}
		else
			write (1, "  ", 2);
		if (j % 2 == 1)
			write (1, " ", 1);
		j++;
	}
	ptr+=line_size;
	size-=line_size;

	write (1, "\n", 1);
	}
}
int main()
{
	unsigned char *ptr;
	ptr = "salut les";
	ft_print_memory(ptr, sizeof(ptr));
}

