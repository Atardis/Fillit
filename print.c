/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 14:12:33 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/07 14:12:37 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_error_exit(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		write(1, &c, 5);
		i++;
	}
	write(1, "\n", 1);
	exit(0);
}

void		ft_print_map(char **map, int size_map)
{
	int		y;
	int		x;

	y = 0;
	while (y < size_map)
	{
		x = 0;
		while (x < size_map)
		{
			ft_putchar(map[y][x]);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
	exit(1);
}

void		delete_tetri(char **map, int tetri, int size_map)
{
	int		y;
	int		x;

	y = 0;
	while (y < size_map)
	{
		x = 0;
		while (x < size_map)
		{
			if (map[y][x] == tetri)
				map[y][x] = '.';
			x++;
		}
		y++;
	}
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
