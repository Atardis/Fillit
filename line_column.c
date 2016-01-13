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

int		ft_x_tetri_origin(char **tetri)
{
	int y_tetri;
	int x_tetri;

	y_tetri = 0;
	while (y_tetri < 4)
	{
		x_tetri = 0;
		while (x_tetri < 4)
		{
			if (tetri[y_tetri][x_tetri] == TETRI)
				return (x_tetri);
			x_tetri++;
		}
		y_tetri++;
	}
	return (666);
}

int		ft_y_tetri_origin(char **tetri)
{
	int y_tetri;
	int x_tetri;

	y_tetri = 0;
	while (y_tetri < 4)
	{
		x_tetri = 0;
		while (x_tetri < 4)
		{
			if (tetri[y_tetri][x_tetri] == TETRI)
				return (y_tetri);
			x_tetri++;
		}
		y_tetri++;
	}
	return (666);
}
