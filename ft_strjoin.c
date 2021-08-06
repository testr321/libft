#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	size = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	str = malloc(sizeof(s1) * size);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, ft_strlen((char *)s1) + 1);
	ft_strlcat(str, s2, size);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *a = "Hello ";
	char *b = "World!";

	printf("%s\n", ft_strjoin(a, b));
}
*/