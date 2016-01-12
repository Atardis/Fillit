/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 18:39:19 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/10 18:39:22 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H
# define MALLOC_H

int			size_map(char **map);
char		**ft_creat_map(int size_map);
char		***ft_tab_buff(char *buff);
void		add_tetri_to_table(char *buff, char ***table, int count);
void		replace_sharp(char ***tab, int count);

#endif
