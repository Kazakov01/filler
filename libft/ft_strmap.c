/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <jquincy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:04:18 by jquincy           #+#    #+#             */
/*   Updated: 2020/11/12 21:11:08 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
				mall[i] = (*f)(s[i]);
				i++;
			}
			mall[i] = '\0';
		}
	}
	return (mall);
}
