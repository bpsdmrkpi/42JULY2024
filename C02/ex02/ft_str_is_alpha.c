int	ft_str_is_alpha(char *str)
{
	int	i;
	int is_alphabet;
	
	is_alphabet = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			is_alphabet = 0;
		}
		i++;
	}
	return is_alphabet;
}
