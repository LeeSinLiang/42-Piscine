#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(int argc, char **argv)
{
	char *str = argv[1];
	int i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	printf("%d | ",i);
	int n = i;
	int arr[n];
	i = 0;
	while (str[i] != '\0')
	{
		arr[i] = str[i] - 48;
		++i;
	}
	i = 0;
	ft_sort_int_tab(arr,n);
	while (i<n)
	{
		printf("%d",arr[i]);
		++i;
	}
	return (0);
}
