#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		int n = atoi(argv[3]);
		printf("%s\n", ft_strncpy(argv[1], argv[2], n));
		return (0);
	}
}
