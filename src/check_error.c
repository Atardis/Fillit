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

static void			check_point_to_line(char *buff)
{
	int		i;
	int		j;

	i = 0;
	while (buff[i])
	{
		j = 0;
		while (buff[i] != '\n' && buff[i])
		{
			j++;
			i++;
		}
		if (j != 4 && buff[i - 1] != '\n')
			ft_error_exit("error");
		i++;
	}
}

static void			ft_verif_line(char *buff)
{
	int			i;
	int			line;

	i = 0;
	while (buff[i])
	{
		line = 1;
		while (line <= 4 && buff[i])
		{
			if (buff[i] != '.' && buff[i] != '#')
				ft_error_exit("error");
			i += 5;
			line++;
		}
		if (buff[i] != '\n' && buff[i])
			ft_error_exit("error");
		i++;
	}
}

void				check_error_buff(char *buff)
{
	int		i;

	i = -1;
	while (buff[++i])
		if (buff[i] != '.' && buff[i] != '\n' && buff[i] != '#')
			ft_error_exit("error");
	if ((buff[i - 1] == '\n' && buff[i - 2] == '\n') || buff[i - 1] != '\n')
		ft_error_exit("error");
	check_point_to_line(buff);
	ft_verif_line(buff);
	ft_check_block(buff);
}
