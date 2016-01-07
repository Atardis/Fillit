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
	int i;

	y = 0;
	i = 0;
	while(y < 4 && i == 0)
	{
		if(check_line(tetri[y]) == 1)
			i++;
		else
			y++;
	}
	return (y);
}

int		ft_x_tetri(char **tetri)
{
	int x;
	int i;

	x = 0;
	i = 0;
	while(x < 4 && i == 0)
	{
		if(check_column(tetri, x) == 1)
			i++;
		else
			x++;
	}
	return (x);
}
