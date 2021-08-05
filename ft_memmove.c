#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*temp;
	size_t		i;

	temp = src;
	i = 0;
	while (i < n)
	{
		*((unsigned char *)(dest + i)) = temp[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
  
int main()
{
	char str1[15] = "testr";
	char str2[15] = "testr";
	char str3[15] = "aaaaaaaaa";

	ft_memmove (str1, str3, sizeof(str3));
	memmove (str2, str3, sizeof(str3));
	printf("Original: %s\n", str2);
	printf("Mine    : %s\n", str1);
	return (0);
}*/