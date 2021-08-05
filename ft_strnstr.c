#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			j++;
			if (!little[j])
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int    main()
{
    char big[] = "abcdefcdzack";
    char small[] = "cdz";
    printf("%s\n", ft_strnstr(big, small, 99));
    return (0);
}*/