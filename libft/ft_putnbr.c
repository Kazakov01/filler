/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <jquincy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:05:46 by jquincy           #+#    #+#             */
/*   Updated: 2020/11/12 21:11:08 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putnbr(int n)
{
	long	m;
	long	nb;

	nb = n;
	m = 1;
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	while (nb / (m * 10) > 0)
		m = m * 10;
	while (m > 0)
	{
		ft_putchar((nb / m + '0'));
		nb = nb % m;
		m = m / 10;
	}
}
