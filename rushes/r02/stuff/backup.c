/*
** Given up to 3 unique symbols,
** determine which rush uses them.
*/

void	ft_which_rush(char **array, char *symbols, int width, int height)
{
	if (ft_search_any("o-|", symbols))
		ft_output_rush((int[]){0}, 1, width, height);
	else if (ft_search_any("/*\\", symbols))
		ft_output_rush((int[]){1}, 1, width, height);
	else
	{
		if (width >= 3 || height >= 3)
			ft_check_abc_full(array, symbols, width, height);
		else if (width == 1 && height == 1)
		{
			ft_output_rush((int[]){2, 3, 4}, 3, width, height);
		}
		else
		{
			if (width == 2)
				ft_check_abc(1, symbols, width, height);
			else if (height == 2)
				ft_check_abc(2, symbols, width, height);
		}
	}
}

void	ft_check_abc_full(char **array, char *symbols, int width, int height)
{
	if (width == 1)
	{
		if (ft_match(symbols, "ABC"))
			ft_output_rush((int[]){2, 4}, 2, width, height);
		else
			ft_output_rush((int[]){3}, 1, width, height);
	}
	else if (height == 1)
	{
		if (ft_match(symbols, "ABC"))
			ft_output_rush((int[]){3, 4}, 2, width, height);
		else
			ft_output_rush((int[]){2}, 1, width, height);
	}
	else
	{
		if (array[0][width - 1] == 'A')
			ft_output_rush((int[]){2}, 1, width, height);
		else if (array[height - 1][0] == 'A')
			ft_output_rush((int[]){3}, 1, width, height);
		else
			ft_output_rush((int[]){4}, 1, width, height);
	}
}

void	ft_check_abc(int side, char *symbols, int width, int height)
{
	if (side == 1)
	{
		if (ft_match(symbols, "AC"))
			ft_output_rush((int[]){3, 4}, 2, width, height);
		else
			ft_output_rush((int[]){2}, 1, width, height);
	}
	else if (side == 2)
	{
		if (ft_match(symbols, "AC"))
			ft_output_rush((int[]){2, 4}, 2, width, height);
		else
			ft_output_rush((int[]){3}, 1, width, height);
	}
}

int		ft_match(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}

int		ft_line_length(char *buffer)
{
	static char symbols[] = "ABC/*\\o-| \n";
	int			length;
	int			lines;
	int			i;

	i = 0;
	length = 0;
	lines = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
		{
			if (length == 0)
				length = i;
			lines++;
			if (((float)i + 1 - lines) / length / lines != ((float)1))
				return (0);
		}
		if ((ft_search(symbols, buffer[i])) == -1)
			return (0);
		++i;
	}
	return (1);
}

