#include <unistd.h>

void	ft_putstr(char *str);

int		main(void)
{
	char *str;

	str = "Hello World";
	ft_putstr(str);
}
