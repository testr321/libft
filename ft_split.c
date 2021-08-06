#include "libft.h"

static size_t	ft_getcount(const char *s, const char c)
{
	size_t	count;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j = i;
			while (s[j] == c && s[j])
			{
				j++;
				if (!s[j])
					return (count + 1);
			}
			count++;
		}
		i++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	len;

	i = 0;
	j = 0;
	count = ft_getcount(s, c);
	str = malloc(sizeof(char **) * (count + 1));
	if (!str)
		return (0);
	while (j < count)
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i + len] != c && s[i + len])
			len++;
		str[j] = malloc(sizeof(char *) * len + 1);
		ft_strlcpy(str[j++], s + i, len + 1);
		i += len + 1;
	}
	str[j] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *str = "abchtestrhhh";
	char c = 'h';
	char **s = ft_split(str, c);	
	size_t i;

	i = 0;
	while (i < 3)
	{
		printf("%s\n", s[i]);
		i++;
	}
}*/