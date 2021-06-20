int	**read_num(char **arg)
{
	int x;
	int y;
	int **numbers;

	numbers = (int **)malloc(syzeof(int *) * 4);
	while (x < 4)
	{
		if (checkerr(arg) == 1)
		{
			return (1);
		}
		numbers[x] = (int *)malloc(sizeof(int) * 4);
		y = 0;
		while (y < 4)
		{
			while (arg[x] > 1 && arg[x] <= 4)
			{
				numbers[x][y] = arg[x] - 48;
			}
			y++;
		}
		x++;
	}
	return (numbers);
}
