#include <unistd.h>

void	ft_print_character(unsigned char *ptr,unsigned int line)
{
	while (line > 0)
	{
		if (*ptr >= 32 && *ptr <= 126)
			write(1, ptr, 1);
		else
			write(1, ".", 1);
		line--;
		ptr++;
	}
}

int main()
{
	unsigned char *ptr = "salut";
	ft_print_character(ptr, sizeof(ptr));
}
