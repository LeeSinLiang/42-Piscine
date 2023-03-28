#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s\n", ft_strcpy(av[1], av[2]));
		return (0);
	}
}
