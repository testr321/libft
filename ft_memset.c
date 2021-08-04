#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		*((char *)s + counter) = (char)c;
		counter++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[50] = "aaaaaaaa testr test";
	char str2[50] = "aaaaaaaa testr test";
	//char str[50] = "";
	//char str2[50] = "";
	ft_memset(str, '.', 8);
	memset(str2, '.', 8);
	printf("Mine:  %s\n", str);
	printf("Original:  %s\n", str2);
}*/