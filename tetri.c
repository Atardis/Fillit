/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 17:27:23 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/05 17:27:26 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../Libft/libft.h"

int		ft_check_line(char *tab)
{
	int x;

	x = 0;
	while (tab[x])
	{
		if (tab[x] != '.')
			return (1);
		x++;
	}
	return (0);
}

int		ft_check_coll(char **tab, int x, int size_map)
{
    int y;
    
    y = 0;
	while (y < size_map)
	{
		if (tab[y][x] != '.')
			return (1);
		y++;
	}
	return (0);
}

char       ***ft_modif_tetri(char ***tab, int nb_tetri)
{
    int c;
    int y;
    int x;
    int z;

    z = 0;
    c = 65;
    while (z < nb_tetri && c <= 90)
    {
        y = 0;
        while (y < 4)
        {
            x = 0;
            while (x < 4)
            {
                if (tab[z][y][x] == '#')
                    tab[z][y][x] = c;
                x++;
            }
            y++;
        }
        z++;
        c = c + 1;
    }
    return (tab);
}
