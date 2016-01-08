/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 19:09:58 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/05 19:10:02 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fillit.h"

void	ft_resolve(char ***tetri, int maxtetri, int size_map, int n_tetri)
{
	search_tetri(tetri, ft_creat_map(size_map), 0, maxtetri, size_map);
}

void	search_tetri(char ***tetri, char **map, int n_tetri, int maxtetri, int size_map)
{
	int x_map;
	int y_map;

	while(tetri[n_tetri] && n_tetri < maxtetri)
	{
		ft_cpy_tetri_map(tetri[n_tetri], map, size_map);
		n_tetri++;
	}
	ft_print_map(map, size_map);
}

void	ft_cpy_tetri_map(char **tetri, char **map, int size_map)
{
	int x_map;
	int x_tetri;
	int y_map;
	int y_tetri;
	int index;
	int n_tetri;

	y_tetri = ft_y_tetri(tetri);
	x_tetri = ft_x_tetri(tetri);
	y_map = x_y_map(map, tetri, size_map, 'y');
	x_map = x_y_map(map, tetri, size_map, 'x');
	// if (ft_putnbr(y_map);
	// ft_putchar('\n');
	// ft_putnbr(x_map);
	// ft_putchar('\n');
	// ft_putchar('\n');
	while (y_tetri < 4 && y_map < size_map && (check_line(tetri[y_tetri]) == 1))
	{
		index = 0;
		while (x_tetri < 4 && x_map < size_map && (check_column(tetri, x_tetri) == 1))
		{
			if (tetri[y_tetri][x_tetri] != '.' && map[y_map][x_map] == '.')
				map[y_map][x_map] = tetri[y_tetri][x_tetri];
			x_map++;
			x_tetri++;
			index++;
		}
		x_tetri = ft_x_tetri(tetri);
		x_map = x_map - index;
		y_tetri++;
		y_map++;
	}
}
