#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(int argc, char **argv)
{
	char *result;
	if (argc == 2)
	{
		argv = realloc(argv, sizeof(char)*3);
		argv[2] = "";
	}
    result = strstr(argv[1], argv[2]);
	printf("Original:\n");
    if (result != NULL)
    {
        printf("'%s' was found in '%s' at position %s.\n", argv[2], argv[1], result);
    }
    else
    {
        printf("'%s' was not found in '%s'.\n", argv[2], argv[1]);
    }

	printf("Mine:\n");
	result = ft_strstr(argv[1], argv[2]);
	if (result != NULL)
    {
        printf("'%s' was found in '%s' at position %s.\n", argv[2], argv[1], result);
    }
    else
    {
        printf("'%s' was not found in '%s'.\n", argv[2], argv[1]);
    }
}
