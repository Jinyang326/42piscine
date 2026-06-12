#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int a = 42;
	int b = 24;

	ft_swap(&a, &b);

	printf("%d\n",a);
	printf("%d",b);

	return (0);

}
