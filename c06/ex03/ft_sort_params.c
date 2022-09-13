/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:47:18 by yugurlu           #+#    #+#             */
/*   Updated: 2022/09/12 10:51:02 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *arv)
{
	int	i;

	i = 0;
	while (arv[i])
	{
		ft_putchar(arv[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_swap(char **arv, int i)
{
	char	*temp;

	temp = arv[i];
	arv[i] = arv[i + 1];
	arv[i + 1] = temp;
}

int	main(int arc, char **arv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < arc - 1 && arc >= 2)
	{
		while (arv[i][j] == arv[i + 1][j])
			j++;
		if (arv[i][j] < arv[i + 1][j])
			i++;
		else
		{
			ft_swap(arv, i);
			i = 0;
		}
		j = 0;
	}
	i = 1;
	while (arc > i)
	{
		ft_putstr(arv[i]);
		i++;
	}
}
