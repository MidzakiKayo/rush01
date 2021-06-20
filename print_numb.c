
void	print_numb(int **numb)
{
	int x;
	int y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putchar(numb[x][y] + '0');
			if (y != 3)
			{
				ft_putchar(' ');
				y++
			}
			ft_putchar('\n');
			x++;
		}
	}
}
