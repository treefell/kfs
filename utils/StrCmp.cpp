int	StrCmp(const char *s1, const char *s2)
{
	unsigned char	*cp_s1 = (unsigned char *)s1;
	unsigned char	*cp_s2 = (unsigned char *)s2;
	unsigned int	i = 0;

	while (cp_s1[i] && cp_s2[i] && cp_s1[i] == cp_s2[i])
		i++;
	return (cp_s1[i] - cp_s2[i]);
}
