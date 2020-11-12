/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <jquincy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:04:56 by jquincy           #+#    #+#             */
/*   Updated: 2020/11/12 21:11:08 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *src)
{
	char	*rez;
	int		l;
	char	*str;

	str = (char *)src;
	l = ft_strlen(src);
	if (!(rez = (char *)malloc(sizeof(char) * l + 1)))
		return (NULL);
	while (*str)
	{
		*rez = *str;
		rez++;
		str++;
	}
	*rez = '\0';
	rez = rez - l;
	return (rez);
}
