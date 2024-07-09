unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	len;
	
	i = 0;
	len = 0;
	if(size != 0)
	{
		while(src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
			len++;
		}
		dest[i] = '\0';
	}
	return len;
}
