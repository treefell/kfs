#include "utils.h"

void PrintText(const char *str)
{
	unsigned int	i = 0;
	while (str && str[i])
	{
		PutChar(str[i]);
		i++;
	}
}
