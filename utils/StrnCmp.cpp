#include "utils.h"

int	StrnCmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char	*cp_s1 = (unsigned char *)s1;
	unsigned char	*cp_s2 = (unsigned char *)s2;
	unsigned int	i = 0;
	unsigned int	len_s1 = StrLen(s1);
	unsigned int	len_s2 = StrLen(s2);

	while (i < n && i <= len_s2 && i <= len_s1)
	{
		if (cp_s1[i] != cp_s2[i])
			return (cp_s1[i] - cp_s2[i]);
		i++;
	}
	return (0);
}
