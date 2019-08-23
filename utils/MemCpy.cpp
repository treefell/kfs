#include "utils.h"

void	*MemCpy(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;
	char		*cp_dst;
	char		*cp_src;

	i = 0;
	cp_dst = (char *)dst;
	cp_src = (char *)src;
	while (i < n)
	{
		cp_dst[i] = cp_src[i];
		i++;
	}
	return (dst);
}
