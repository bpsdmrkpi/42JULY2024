int	ft_str_is_uppercase(char *str)
{
	int is_all_uppercase;
	int i;

	is_all_uppercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] < 65 || str[i] > 90)
		{
			is_all_uppercase = 0;
		}
		i++;
	}
	return is_all_uppercase;
}
