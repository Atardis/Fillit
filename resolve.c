/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/02 15:34:49 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/02 15:34:53 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../Libft/libft.h"

void	ft_print_map(char **map, int size_map);
int		ft_check_line(char *tab);
int		ft_check_coll(char **tab, int x, int size_map);
void	ft_full_map_point(char **map, int size);

char	**ft_creat_map(int size_map)
{
	char	**map;
	int y;

	y = 0;
	map = (char **)malloc(size_map * sizeof(char *));
	while (y < size_map)
	{
		map[y] = (char *)malloc(size_map *sizeof(char));
		y++;
	}
	ft_full_map_point(map, size_map)
	return (map);
}

char	**ft_cpy_tetri(char **map, char **tab, int y, int x)
{
	int	i;
	int	j;
	int count;
	
	i = 0;
	j = 0;
	while (y < 4 && (ft_check_line(tab[y])) == 1)
	{
		count = 0;
		while (x < 4 && (ft_check_coll(tab, x, 4)) == 1)
		{
			if (tab[y][x])
				map[i][j] = tab[y][x];
			else 
			j++;
			x++;
			count++;
		}
		x = x - count;
		j = j - count;
		i++;
		y++;
	}
	return (map);
}

char 	**ft_print_tetri_map(char **map, char **tab, int size_map)
{
	int y;
	int x;

	y = 0;
	while (ft_check_line(tab[y]) != 1)
		y++;
	x = 0;
	while (ft_check_coll(tab, x, size_map) != 1)
		x++;
	
	return (ft_cpy_tetri(map, tab, y, x));
}

void	ft_resolve(char *** tab, int size_map, int nb_tetri)
{
	int z;
	
	z = 0;
	while (z < nb_tetri)
    {
        ft_print_map(ft_print_tetri_map(ft_creat_map(size_map), \
            tab[z], size_map), size_map);
        z++;
    }
}

