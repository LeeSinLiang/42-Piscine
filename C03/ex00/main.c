#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	printf("Original: %d\n", strcmp(argv[1], argv[2]));
	printf("Mine: %d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}