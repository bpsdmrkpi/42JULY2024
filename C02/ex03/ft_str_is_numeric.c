int	ft_str_is_numeric(char *str)
{
	int is_number;
	int i;
	
	is_number = 1;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 48 && str[i] > 57)
		{
			is_number = 0;
		}
		i++;
	}
	return is_number;
}	
