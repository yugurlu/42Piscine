/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 01:57:04 by yugurlu           #+#    #+#             */
/*   Updated: 2022/09/11 12:49:57 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (0 < power)
	{
		return (nb * ft_iterative_power(nb, power - 1));
	}
	return (0);
}
