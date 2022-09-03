/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:32:40 by yugurlu           #+#    #+#             */
/*   Updated: 2022/09/03 13:39:23 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	while (i < size -1)
	{
		if (tab[i] > tab[i +1])
		{
			x = tab[i];
			tab[i] = tab[i +1];
			tab[i +1] = x;
			i = -1;
		}
		i++;
	}
}
