int	checkerr(arg)
{
	int i;
	int err;

	i = 0;
	err = 0;
	if (arg[i] == '\0')
	{
		return (1);
	}
	while (arg[i] == '\0')
	{
		if(arg[i] < '1' || arg[i] > '4' || arg[i] != ' ')
		{
			err++;
		}
		i++;
	}
	if (err > 0)
	{
		return (1);
	}
	return (0);
}
