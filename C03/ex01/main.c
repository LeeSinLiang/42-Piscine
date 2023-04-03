#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	printf("Original: %d\n", strncmp(argv[1], argv[2], (unsigned int)argv[3]));
	printf("Mine: %d\n", ft_strncmp(argv[1], argv[2], (unsigned int)argv[3]));
	return (0);
}