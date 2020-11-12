/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <jquincy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:04:35 by jquincy           #+#    #+#             */
/*   Updated: 2020/11/12 21:11:08 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			len_s1;
	size_t			len_s2;
	char			*mall;

	if (s1 && s2)
	{
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		if (len_s1 + len_s2 + 1 == 0)
			return (0);
		mall = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
		if (mall)
		{
			ft_memcpy(mall, s1, len_s1);
			ft_memcpy(mall + len_s1, s2, len_s2);
			mall[len_s1 + len_s2] = '\0';
			return (mall);
		}
	}
	return (0);
}
