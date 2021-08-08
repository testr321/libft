#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (start > ft_strlen(s))
		return (ft_strdup("\0"));
	if (len <= ft_strlen(s + start))
		size = len;
	else
		size = ft_strlen(s + start);
	str = malloc(sizeof(*s) * (size + 1));
	if (!str)
		return (ft_strdup("\0"));
	ft_strlcpy(str, (s + start), size + 1);
	return (str);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *str = ft_strdup("1");
	char *s = ft_substr(str, 42, 42000000);

	printf("%s\n", s);
	printf("%ld\n", ft_strlen(s));
}*/