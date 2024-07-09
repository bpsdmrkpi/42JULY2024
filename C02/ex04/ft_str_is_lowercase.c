int	ft_str_is_lowercase(char *str)
{
	int is_lowercase;
	int i;

	is_lowercase = 1
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] < 97 || str[i] > 122)
		{
			is_lowercase = 0
		}
		i++;
	}
	return is_lowercase;
}
