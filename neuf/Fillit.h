/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 14:09:21 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/07 14:09:23 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../../Libft/libft.h"

void		ft_print_map(char **map, int size_map);
void		search_tetri(char ***tetri, char **map, int n_tetri, int maxtetri, int size_map);
void		ft_cpy_tetri_map(char **tetri, char **map, int size_map);
void		ft_print_map_test(char **map, int size_map);
void		ft_cpy_tetri(char **map, char **tab, int y, int x, int size_map);
void		ft_error_exit(char *str);
void		print_tab_3d(char ***tab, int count);
void		ft_resolve(char *** tetri, int maxtetri, int size_map, int n_tetri);
void		delete_tetri(char **map, int tetri, int size_map);
void		ft_full_map_point(char **map, int size);


char        ***ft_modif_tetri(char ***tab, int nb_tetri);
char		***ft_tab_buff(char *buff);
char		**ft_creat_map(int size_map);



int			check_line(char *line);
int			check_column(char **column, int x);
int			ft_y_tetri(char **tetri);
int			ft_x_tetri(char **tetri);
int			ft_check_block(char *buff);
int			ft_count_back(char *buff);
int			ft_count_char_sharp_line(char *buff);
int			ft_count_sharp(char *buff);
int			ft_count_enter(char *buff);
int			ft_check_line(char *tab);
int			ft_check_coll(char **tab, int x, int size_map);
int			ft_tetri_test_map(char **tetri, char **map, int y_tetri, int x_tetri, int size_map);
int			what_tetri(char **tetri);
int			x_y_map(char **map, char **tetri, int size_map, char y_x);
int			check_map_tetri(char **map, char **tetri, int y_map, int x_map, int size_map);

int		verif_position_count(char **map, char char_tetri, int size_map);
int		verif_position(char **map, char **tetri, int y_map, int x_map, int size_map);


