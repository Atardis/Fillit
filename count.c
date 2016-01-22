/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 16:37:55 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/10 16:37:57 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_count_back(char *buff)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (buff[i])
	{
		if (buff[i] == '#')
			j++;
		i++;
	}
	return (j);
}

int			square_root(int n_tetri)
{
	if (n_tetri == 1)
		return (2);
	if (n_tetri == 2)
		return (3);
	if (n_tetri >= 3 && n_tetri <= 4)
		return (4);
	if (n_tetri >= 5 && n_tetri <= 6)
		return (5);
	if (n_tetri >= 7 && n_tetri <= 9)
		return (6);
	if (n_tetri >= 10 && n_tetri <= 12)
		return (7);
	if (n_tetri >= 13 && n_tetri <= 16)
		return (8);
	if (n_tetri >= 17 && n_tetri <= 20)
		return (9);
	if (n_tetri >= 21 && n_tetri <= 25)
		return (10);
	if (n_tetri == 26)
		return (11);
	return (0);
}
