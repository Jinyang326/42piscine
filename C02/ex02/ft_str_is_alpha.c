/*
#include <unistd.h>
*/

int	ft_str_is_alpha(char *str)
{
	int	ans;
	int	i;

	ans = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
		{
			ans = 0;
			return (ans);
		}
	}
	return (ans);
}

/*
void	putnbr(int n)
{
	char c;

	if(n >= 10)
		putnbr(n / 10);

	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	result;

	result = ft_str_is_alpha("42KL");
	putnbr(result);
	return (0);
}
*/
