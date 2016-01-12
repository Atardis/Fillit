/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_table.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 19:10:43 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/10 19:10:48 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODIF_TABLE_H
# define MODIF_TABLE_H

void	ft_full_map_point(char **map, int size);
int		add_test_tetri_map(char **map, int ym, int xm, char **tetri);
int		what_is_tetri(char **tetri);
int		add_tetri(char **map, int y_map, int x_map, char **tetri);
int		ft_x_tetri_origin(char **tetri);
int		ft_y_tetri_origin(char **tetri);

#endif
