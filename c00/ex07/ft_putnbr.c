/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:48:05 by yugurlu           #+#    #+#             */
/*   Updated: 2022/08/30 00:24:14 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	s;
	int	min;

	min = 0;
	s = 1;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb *= -1;
		putchar('-');
	}
	while (s <= nb / 10)
		s *= 10;
	while (s != 0)
	{
		putchar(nb / s % 10 + '0');
		s /= 10;
	}
}
