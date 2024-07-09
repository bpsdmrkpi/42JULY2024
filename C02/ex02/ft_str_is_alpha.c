int	ft_str_is_alpha(char *str)
{
	int	i;
	int is_alphabet;
	
	is_alphabet = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] < 65) // A'dan küçükse
		{
			is_alphabet = 0;
		}		
		if(str[i] > 90 && str[i] < 97) // Z'den büyük a'dan küçükse
		{
			is_alphabet = 0;
		}
		if(str[i] > 122) // z'den büyükse
		{
			is_alphabet = 0;
		}
		i++;
	}
	return is_alphabet;
}
