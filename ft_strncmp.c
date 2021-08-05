#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *a = "aaaaaaaaaaaaaaaa";
	char *b = "aaaaaa";

	printf("%d\n", ft_strncmp(a, b, 5));
	printf("%d\n", strncmp(a, b, 5));
}*/