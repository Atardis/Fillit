/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 14:09:21 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/14 17:05:21 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 545
# define Y (ym + yt - yo)
# define X (xm + xt - xo)
# define SIZE size_map(map)
# define TETRI what_is_tetri(tetri)

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

void			ft_check_block(char *buff);

void			check_error_buff(char *buff);
void			check_point_to_line(char *buff);
void			ft_check_twenty_one(char *buff);

#endif
