#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "abcde";

	printf("%ld\n", ft_strlen(str));
	printf("%ld\n", strlen(str));
}*/