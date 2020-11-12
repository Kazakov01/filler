/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_players.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <jquincy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:45:46 by jquincy           #+#    #+#             */
/*   Updated: 2020/11/12 21:11:08 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		set_players(t_filler *game)
{
	char	*line;
	int		i;

	if (!get_next_line(0, &line))
		exit(0);
	i = 0;
	while (line[i] && line[i] != 'p')
		i++;
	if (line[i + 1] == '1')
	{
		game->my = 'o';
		game->enemy = 'x';
	}
	else
	{
		game->my = 'x';
		game->enemy = 'o';
	}
	free(line);
}
