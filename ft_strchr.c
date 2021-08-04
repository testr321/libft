char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] || str[i] == '\0')
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[50] = "hello \0 world!";
	char c = '\0';

	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str, c));
}*/