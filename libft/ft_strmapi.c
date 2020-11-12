/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <jquincy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:04:13 by jquincy           #+#    #+#             */
/*   Updated: 2020/11/12 21:11:08 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	size_t			i;
	char			*mall;

	mall = 0;
	if (s)
	{
		size = ft_strlen(s);
		mall = (char *)malloc(sizeof(char) * (size + 1));
		if (f && mall)
		{
			i = 0;
			while (i < size)
			{
				mall[i] = (*f)(i, s[i]);
				i++;
			}
			mall[i] = '\0';
		}
	}
	return (mall);
}
