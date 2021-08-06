#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	str = malloc(nmemb * size);
	if (!(str || nmemb || size))
		return (0);
	ft_bzero(str, nmemb);
	return (str);
}
