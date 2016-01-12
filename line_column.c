/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_column.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 18:29:13 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/06 18:29:15 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fillit.h"

int		check_line(char *line)
{
	int x;

	x = 0;
	while (x < 4)
	{
		if (line[x] != '.')
			return (1);
		x++;
	}
	return (0);
}

int		check_column(char **column, int x)
{
	int y;

	y = 0;
	while (y < 4)
	{
		if (column[y][x] != '.')
			return (1);
		y++;
	}
	return (0);
}

int		ft_y_tetri(char **tetri)
{
	int y;

	y = 0;
	while (y < 4)
	{
		if (check_line(tetri[y]) == 1)
			return (y);
		else
			y++;
	}
	return (666);
}

int		ft_x_tetri(char **tetri)
{
	int x;

	x = 0;
	while (x < 4)
	{
		if (check_column(tetri, x) == 1)
			return (x);
		else
			x++;
	}
	return (666);
}
