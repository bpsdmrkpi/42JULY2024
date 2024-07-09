char	*ft_strcapitalize(char *str)
{
	int is_space;
	int i;
	
	is_space = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if(is_space == 1)
		{
			if(str[i] >= 97 && str[i] <= 122)
			{	
				str[i] = str[i] - 32;
			}
			is_space = 0;
		}
		if(str[i] == 32)
		{
			is_space = 1;
		}
		i++;
	}
	return str;
}
