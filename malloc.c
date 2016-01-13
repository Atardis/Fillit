/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 20:34:57 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/05 20:35:00 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_creat_map(int size_map)
{
	char	**map;
	int		y;

	y = 0;
	map = (char **)malloc(size_map * sizeof(char *));
	while (y < size_map)
	{
		map[y] = (char *)malloc(size_map * sizeof(char) + 1);
		y++;
	}
	ft_full_map_point(map, size_map);
	return (map);
}

char		***ft_tab_buff(char *buff)
{
	char	***table;
	int		z;
	int		y;

	table = (char ***)malloc(count_tetri(buff) * sizeof(char **));
	z = 0;
	while (z < count_tetri(buff))
	{
		table[z] = (char **)malloc(4 * sizeof(char*));
		y = 0;
		while (y < 4)
		{
			table[z][y] = (char *)malloc(4 * sizeof(char));
			y++;
		}
		z++;
	}
	if (!table)
		return (NULL);
	add_tetri_to_table(buff, table, count_tetri(buff));
	replace_sharp(table, count_tetri(buff));
	return (table);
}

void		add_tetri_to_table(char *buff, char ***table, int count)
{
	int		i;
	int		z;
	int		y;
	int		x;

	i = 0;
	z = -1;
	while (++z < count)
	{
		y = -1;
		while (++y < 4)
		{
			x = 0;
			while (x < 4)
			{
				if (buff[i] != '\n')
				{
					table[z][y][x] = buff[i];
					x++;
				}
				i++;
			}
		}
	}
}

void		replace_sharp(char ***tab, int count)
{
	int		z;
	int		y;
	int		x;
	int		i;

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

int			size_map(char **map)
{
	int		x_map;

	x_map = 0;
	while (map[0][x_map] != '\0')
		x_map++;
	return (x_map);
}
