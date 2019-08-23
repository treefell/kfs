#include "utils.h"

unsigned int	StrLen(const char *str)
{
	unsigned int	i = 0;

	while (str[i])
		i++;
	return (i);
}
