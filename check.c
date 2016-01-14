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
	if (line != 0 && buff[i - 5] && buff[i - 5] == '#')
		j++;
	if (buff[i - 1] && buff[i - 1] == '#')
		j++;
	if (buff[i + 1] && buff[i + 1] == '#')
		j++;
	if (buff[i + 5] && buff[i + 5] == '#' && line != 3)
		j++;
	return (j);
}

int			ft_check_block(char *buff)
{
	int i;
	int j;
	int line;

	i = 0;
	while (buff[i])
	{
		j = 0;
		line = 0;
		while (line < 5 && buff[i])
		{
			if (buff[i] == '\n')
				line++;
			else if (buff[i] == '#')
				j += ft_check_block_next(buff, i, line);
			i++;
		}
		if (j < 5)
			return (0);
	}
	if (count_tetri(buff) < 1 || count_tetri(buff) > 26)
		return (0);
	return (1);
}

int			ft_check_twenty_one(char *buff)
{
	int	i;

	i = -1;
	while (buff[i += 21])
		if (buff[i] != '\n')
			return (0);
	return (1);
}
