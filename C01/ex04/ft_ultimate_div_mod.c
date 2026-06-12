#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div = *a / *b;
	int mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(void)
{
	int a = 10;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);

	printf("Result division: %d\n", a);
	printf("Remainder: %d", b);

	return (0);
}
