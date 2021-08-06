#include "libft.h"

static size_t	ft_getlen(int n)
{
	size_t	count;

	count = 0;
	if (n == -2147483648)
		return (11);
	else if (n == 0)
		return (1);
	else if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	int		i;
	char	*str;

	i = 0;
	len = ft_getlen(n);
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (0);
	i = len - 1;
	if (n == -2147483648)
		return ("-2147483648");
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (i >= 0 && str[i] != '-')
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0));
}*/