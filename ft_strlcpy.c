#include <stdlib.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[i] && i < (size - 1) && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[count])
		count++;
	return (count);
}
/*
#include <stdio.h>
int main(void)
{
	char a[] = "hello world this is me";
	char b[50] = "abcdefgh";

	printf("%ld\n", ft_strlcpy(b, a, 0));
	printf("%s\n", b);
}*/