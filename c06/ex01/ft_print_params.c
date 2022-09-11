/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:51:29 by yugurlu           #+#    #+#             */
/*   Updated: 2022/09/11 12:37:49 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (arc >= 2)
	{
		while (arv[j])
		{
			while (arv[j][i])
			{
				write (1, &arv[j][i], 1);
				i++;
			}
			i = 0;
			j++;
			write (1, "\n", 1);
		}
		return (0);
	}
}
