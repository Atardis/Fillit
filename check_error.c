/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 18:47:39 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/10 18:47:41 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_count_sharp(char *buff)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buff[i])
	{
		if (buff[i] == '#')
			j++;
		i++;
	}
	if ((j % 4) == 0)
		return (0);
	return (1);
}

int			ft_count_enter(char *buff)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buff[i])
	{
		if (buff[i] == '\n' && i < 4)
			return (0);
		if (buff[i] == '\n')
			j++;
		i++;
	}
	if ((j % 5) != 0)
		return (1);
	return (0);
}

int			ft_count_char_tetri(char *buff)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buff[i])
	{
		while (buff[i] != '\n' && buff[i])
		{
			j++;
			i++;
		}
		if (buff[i] == '\n' && buff[i + 1] == '\n' && j != 16)
			return (0);
		else if (buff[i] == '\n' && buff[i + 1] == '\n' && j == 16)
			j = 0;
		i++;
	}
	if (buff[--i] != '\n')
		return (0);
	return (1);
}

int			ft_count_char_sharp_line(char *buff)
{
	int		i;
	int		charac;
	int		new;
	int		sharp;

	i = -1;
	new = 0;
	sharp = 0;
	while (buff[++i])
	{
		charac = 0;
		while (buff[i] != '\n' && buff[i])
		{
			if (buff[i] == '#')
				sharp++;
			if (buff[i] != '.' && buff[i] != '#')
				return (0);
			i++;
			charac++;
		}
		new++;
		if (charac != 4 && (new % 4) != 0 && sharp % 4 != 0)
			return (0);
	}
	return (1);
}
