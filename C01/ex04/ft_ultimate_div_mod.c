void	ft_ultimate_div_mod(int *a, int *b)
{
	int division;
	int modulus;

	division = *a / *b;
	modulus = *a % *b;
	*a = division;
	*b = modulus;
}
