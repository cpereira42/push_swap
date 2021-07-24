/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 20:17:02 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/23 19:07:07 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_all *all)
{
	int	i;
	int	aux;

	i = 0;
	while (i < all->qtt_t - 1)
	{
		if (all->vector_o[i] > all->vector_o[i + 1])
		{
			aux = all->vector_o[i];
			all->vector_o[i] = all->vector_o[i + 1];
			all->vector_o[i + 1] = aux;
			i = -1;
		}
		i++;
	}
}

void	change_position(t_all *all)
{
	int	i;
	int	j;

	i = 0;
	while (i < all->qtt_t)
	{
		j = 0;
		while (j < all->qtt_t)
		{
			if (all->vector_a[i] == all->vector_o[j])
			{
				all->vector_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	more_hun(t_all *all)
{
	sort(all);
	change_position(all);
	first_passag(all);
}
