/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_y_tetri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 13:39:55 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/07 13:39:57 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fillit.h"

void	replace_sharp(char ***tab, int count)
{
	int z;
	int y;
	int x;
	int i;

	i = 65;
	z = 0;
	while (z < count && tab[z])
	{
		y = 0;
		while (y < 4)
		{
			x = 0;
			while (x < 4)
			{
				if (tab[z][y][x] == '#')
					tab[z][y][x] = i;
				x++;
			}
			y++;
		}
		z++;
		i++;
	}
}

void	delete_tetri(char **map, int tetri, int size_map)
{
	int y;
	int x;

	y = 0;
	while (y < size_map)
	{
		x = 0;
		while (x < size_map)
		{
			if (map[y][x] == (tetri + 65))
				map[y][x] = '.';
			x++;
		}
		y++;
	}
}

void	ft_full_map_point(char **map, int size)
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
		y++;
	}
}

int		what_tetri(char **tetri)
{
	int x;
	int y;
	int index;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (tetri[y][x] != '.')
				index = tetri[y][x] - 65;
			x++;
		}
		y++;
	}
	return (index);
}

int		x_y_map(char **map, char **tetri, int size_map, char y_x)
{
	int y_tetri;
	int x_tetri;
	int y_map;
	int x_map;
	int index;

	x_tetri = ft_x_tetri(tetri);
	y_tetri = ft_y_tetri(tetri);
	index = 0;
	y_map = 0;
	while (y_map < size_map && index == 0)
	{
		x_map = 0;
		while (x_map < size_map && index == 0)
		{
			if ((verif_position(map, tetri, y_map, x_map, size_map)) == 1)
			{
				if (y_x == 'y')
					return (y_map);
				if (y_x == 'x')
					return (x_map);
			}
			else
				x_map++;
		}
		y_map++;
	}
	return (666);
}

int		verif_position(char **map, char **tetri, int y_map, int x_map, int size_map)
{
	int y_tetri;
	int x_tetri;
	int index;

	y_tetri = ft_y_tetri(tetri);
	while (y_map < size_map && y_tetri < 4)
	{
		index = 0;
		x_tetri = ft_x_tetri(tetri);
		while (x_map < size_map && x_tetri < 4)
		{
			if (map[y_map][x_map] == '.' && (tetri[y_tetri][x_tetri] != '.'))
				map[y_map][x_map] = tetri[y_tetri][x_tetri];
			x_map++;
			x_tetri++;
			index++;
		}
		x_map = x_map - index;
		y_map++;
		y_tetri++;
	}
	if (verif_position_count(map, (what_tetri(tetri) + 65), size_map) == 1)
		index = 0;
	delete_tetri(map, what_tetri(tetri), size_map);
	if (index == 0)
		return (1);
	return (0);
}

int		verif_position_count(char **map, char char_tetri, int size_map)
{
	int y_map;
	int x_map;
	int count_char;

	y_map = 0;
	count_char = 0;
	while (y_map < size_map)
	{
		x_map = 0;
		while (x_map < size_map)
		{
			if (map[y_map][x_map] == char_tetri)
				count_char++;
			x_map++;
		}
		y_map++;
	}
	if (count_char == 4)
		return (1);
	return (0);
}
