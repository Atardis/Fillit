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

int		ft_test_tetri_map(char **map, char ***tab)
{
	int z;
	
	z = 0;
	while(z < 26 && tab[z])
	{
		if ()
	}
}

void	resolver(char ***tab, int size_map, int nomber_tetri)
{
	
}

void	delete_tetri(char **map, int letter)
{
	int y;
	int x;
	
	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == letter)
				map[y][x] == '.';
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