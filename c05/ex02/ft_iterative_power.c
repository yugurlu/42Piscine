/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 01:46:24 by yugurlu           #+#    #+#             */
/*   Updated: 2022/09/11 12:48:41 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 1;
	if (0 < nb && 0 < power)
	{
		while (0 < power)
		{
			x *= nb;
			power--;
		}
		return (x);
	}
	if (power == 0)
		return (1);
	return (0);
}
