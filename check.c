/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 16:40:02 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/14 16:06:22 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_check_block_next(char *buff, int i, int line)
{
	int j;

	j = 0;
	if ((i > 5) && buff[i - 5] && buff[i - 5] == '#' && buff[i] == '#')
		j++;
	if (buff[i - 1] && buff[i - 1] == '#' && buff[i] == '#')
		j++;
	if (buff[i + 1] && buff[i + 1] == '#' && buff[i] == '#')
		j++;
	if (buff[i + 5] && buff[i + 5] == '#' && buff[i] == '#' \
			&& (ft_count_back(buff) - 1) != line)
		j++;
	return (j);
}

int			ft_check_block(char *buff)
{
	int i;
	int j;
	int new;

	i = 0;
	while (buff[i])
	{
		j = 0;
		new = 0;
		while (new <= 4 && buff[i])
		{
			if (buff[i] == '\n')
				new++;
			j = j + ft_check_block_next(buff, i, new);
			i++;
		}
	}
	if (count_tetri(buff) < 1 || count_tetri(buff) > 26)
		return (0);
	return (j);
}

int			ft_check_twenty_one(char *buff)
{
	int		i;

	i = -1;
	while(buff[i + 21])
		if (buff[i] != '\n')
			return (0);
	return (1);
}