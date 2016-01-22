/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_y_tetri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 13:39:55 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/14 16:51:31 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_x_tetri_origin(char **tetri)
{
	int		y_tetri;
	int		x_tetri;

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

static int	ft_y_tetri_origin(char **tetri)
{
	int		y_tetri;
	int		x_tetri;

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

void		ft_full_map_point(char **map, int size)
{
	int y;
	int x;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			map[y][x] = '.';
			x++;
		}
		map[y][x] = '\0';
		y++;
	}
}

int			add_tetri(char **map, int ym, int xm, char **tetri)
{
	int	yo;
	int xo;
	int yt;
	int xt;

	yo = ft_y_tetri_origin(tetri);
	xo = ft_x_tetri_origin(tetri);
	yt = -1;
	while (++yt < 4)
	{
		xt = -1;
		while (++xt < 4)
		{
			if (tetri[yt][xt] != '.' && tetri[yt][xt])
			{
				if (Y >= SIZE || X >= SIZE || map[Y][X] != '.')
				{
					delete_tetri(map, TETRI, SIZE);
					return (0);
				}
				map[Y][X] = tetri[yt][xt];
			}
		}
	}
	return (1);
}
