/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:58:05 by yugurlu           #+#    #+#             */
/*   Updated: 2022/09/10 13:35:15 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	s;

	s = 1;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}	
	else if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	while (s <= nb / 10)
		s *= 10;
	while (s != 0)
	{
		ft_putchar(nb / s % 10 + '0');
		s /= 10;
	}
}
