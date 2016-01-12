/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 19:16:18 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/10 19:16:20 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESOLVER_H
# define RESOLVER_H

void	ft_resolve(char ***tetri, int maxtetri);
void	recursive(char ***tetri, char **map, int maxtetri, int n_tetri);

#endif
