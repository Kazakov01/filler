/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <jquincy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:46:24 by jquincy           #+#    #+#             */
/*   Updated: 2020/11/12 21:11:08 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include <stdio.h>
# include <fcntl.h>
# include "../libft/includes/libft.h"

typedef struct		s_filler
{
	char			**mapa;
	char			**piece;
	char			my;
	char			enemy;
	int				x;
	int				y;
}					t_filler;

t_list				*get_legal_moves(t_filler *game);
int					main(void);
int					play(t_filler *game);
int					*get_best_direction(t_filler *game, int my_x, int my_y);
int					*max_distance(t_filler *game, int mi_x, int mi_y);
int					is_best_move(int *pos, int oldx, int oldy, int *dir);
int					*is_valid_move(t_filler *game, int i, int j);
int					place_piece(t_filler *game, int top_x, int top_y);
int					check(t_filler *game, int x, int y, int *placed);
void				make_move(t_filler *game, t_list *moves);
void				set_players(t_filler *game);
void				get(t_filler *game);
void				get_piece(t_filler *game);
void				get_map(t_filler *game);
void				get_map_size(t_filler *game);
void				free_array(char ***src);

#endif
