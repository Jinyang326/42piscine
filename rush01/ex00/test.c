int	array[4][4];

void	check(int num)
{
	int	i;
	int	j;
	int	biggest;
	int	visible;

	i = 1;
	j = 1;
	biggest = 0;
	visible = 0;
	while (i != 4 && j != 4)
	{
		if (num[i][j] < biggest)
			biggest = num[i][j];
			visible++;
	}
}








void	rush01(int col1top, int col2top, int col3top, int col4top, int col1bottom, int	col2bottom, int	col3bottom, int col4bottom, int row1left, int row2left, int row3left, int row4left, int row1right, int row2right, int row3right, int row4right)
{
}
