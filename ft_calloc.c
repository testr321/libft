#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	int		i;

	i = 0;
	str = malloc(nmemb * size);
	if (!(str || nmemb || size))
		return (0);
	ft_bzero(str, nmemb);
	return (str);
}