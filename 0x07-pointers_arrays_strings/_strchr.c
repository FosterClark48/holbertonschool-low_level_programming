char *_strchr(char *s, char c)
{
	char *find = '\0';

	if (*s != '\0')
	{
		do {
			if (*s == (char)c)
			{
				find = s;
				break;
			}
		}
	while (*s++);
	}
	return (find);
}
