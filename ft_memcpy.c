#include <stdlib.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		*(char *)(dest + counter) = *(char *)(src + counter);
		counter++;
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

	ft_memcpy (str1, str3, sizeof(str3));
	memcpy (str2, str3, sizeof(str3));
	printf("Original: %s\n", str2);
	printf("Mine    : %s\n", str1);
	return (0);
}*/