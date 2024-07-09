int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	is_printable = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 33 || str[i] == 127)
		{
			is_printable = 0;
		}
		i++;
	}
	return is_printable;
}
