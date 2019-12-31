

int 	ft_strclen(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	return (i);
}