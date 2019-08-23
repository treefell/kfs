#include "utils.h"

void *memset(void *b, int c, unsigned int len)
{
	unsigned int	i = 0;
	unsigned char	*dst = (unsigned char *)b;
	unsigned char	cp_c = (unsigned char)c;

	while (i < len)
	{
		dst[i] = cp_c;
		i++;
	}
	return (b);
}
