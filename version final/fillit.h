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

int				ft_count_back(char *buff);
int				square_root(int n_tetri);

int				check_line(char *line);
int				check_column(char **column, int x);
int				what_is_tetri(char **tetri);

int				count_tetri(char *buff);

char			**ft_creat_map(int size_map);
char			***ft_tab_buff(char *buff);
int				size_map(char **map);

void			ft_full_map_point(char **map, int size);
int				add_tetri(char **map, int ym, int xm, char **tetri);

void			ft_error_exit(char *str);
void			ft_print_map(char **map, int size_map);
void			delete_tetri(char **map, int tetri, int size_map);

void			ft_resolve(char ***tetri, int maxtetri);

#endif
