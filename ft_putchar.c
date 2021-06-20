#include <unistd.h>

void	ft_putchar(char *s)
{
	write(1, &s, 1);
}
