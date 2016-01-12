/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 19:12:54 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/10 19:12:57 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

void		ft_error_exit(char *str);
void		ft_print_map(char **map, int size_map);
void		delete_tetri(char **map, int tetri, int size_map);

#endif
