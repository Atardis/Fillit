/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 19:09:58 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/14 17:04:03 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	recursive(char ***tetri, char **map, int maxtetri, int n_tetri)
{
	int		x_map;
	int		y_map;

	y_map = -1;
	while (++y_map < SIZE)
	{
		x_map = -1;
		while (++x_map < SIZE)
		{
			if (add_tetri(map, y_map, x_map, tetri[n_tetri]))
			{
				if ((n_tetri + 1) != maxtetri)
					recursive(tetri, map, maxtetri, (n_tetri + 1));
				else
					ft_print_map(map, SIZE);
				delete_tetri(map, what_is_tetri(tetri[n_tetri]), SIZE);
			}
		}
	}
}

void		ft_resolve(char ***tetri, int maxtetri)
{
	int size_map;

	size_map = (square_root(maxtetri) - 1);
	while (++size_map)
		recursive(tetri, ft_creat_map(size_map), maxtetri, 0);
}
