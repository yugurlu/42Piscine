/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:01:26 by yugurlu           #+#    #+#             */
/*   Updated: 2022/09/15 13:31:56 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char **arv)
{
	int	x;

	x = 0;
	if (arc >= 2)
	{
		while (arc - 1 > 0)
		{
			while (arv[arc - 1][x] && arc != 1)
			{
				write (1, &arv[arc - 1][x], 1);
				x++;
			}
			x = 0;
			arc--;
			write(1, "\n", 1);
		}
	}
    return (0);
}
