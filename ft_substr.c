#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (len <= ft_strlen((char *)s + start))
		str = malloc(sizeof(s) * (len + 1));
	else
		str = malloc(sizeof(s) * (ft_strlen((char *)s + start) + 1));
	if (!str || start > (ft_strlen((char *)s) - 1))
		return (0);
	
	ft_strlcpy(str, (s + start), len + 1);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *a = "abcde";

	printf("%s\n", ft_substr(a, 0, 50));
}*/