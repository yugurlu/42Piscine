/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:28:32 by yugurlu           #+#    #+#             */
/*   Updated: 2022/09/03 12:35:00 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	y = 0;
	while (y < (size / 2))
	{
		x = tab[y];
		tab[y] = tab[size - 1 - y];
		tab[size - 1 - y] = x;
		y++;
	}
}
