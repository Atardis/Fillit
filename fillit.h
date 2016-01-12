/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 14:09:21 by gahubaul          #+#    #+#             */
/*   Updated: 2016/01/07 14:09:23 by gahubaul         ###   ########.fr       */
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

# include "../Libft/libft.h"
# include "check.h"
# include "count.h"
# include "check_error.h"
# include "line_column.h"
# include "malloc.h"
# include "modif_table.h"
# include "print.h"
# include "resolver.h"
# include "main.h"

#endif
