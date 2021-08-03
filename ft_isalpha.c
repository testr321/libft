int	ft_isalpa(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_isalpa('a'));
	printf("%d\n", ft_isalpa('z'));
	printf("%d\n", ft_isalpa('0'));
	printf("%d\n", ft_isalpa('9'));
	printf("%d\n", ft_isalpa('.'));
}*/