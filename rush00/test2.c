void    rush(int x, int y)
{
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i == 0) /*if at 1st row*/
            {
                if (j == 0) /* if at 1st column*/
                {
                    ft_putchar('o');
                }
                else if (j == x - 1) /*if at last column */
                {
                    ft_putchar('o');
                }
                else /*anything in between*/
                {
                    ft_putchar('-');
                }
            }
            else if (i == y - 1) /*at last row*/
            {
                if (j == 0) /* if at 1st column*/
                {
                    ft_putchar('o');
                }
                else if (j == x - 1) /*if at last column */
                {
                    ft_putchar('o');
                }
                else /*anything in between*/
                {
                    ft_putchar('-');
                }
            }
            else /*anything in between the top and bottom row*/
            {
                if (j == 0 || j == x - 1) /* if at 1st and last column*/
                {
                    ft_putchar('|');
                }
                else /*anything in between*/
                {
                    ft_putchar(' '); /*anything in center*/
                }
            }
        }
        ft_putchar('\n');
    }
}
