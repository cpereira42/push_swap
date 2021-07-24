/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:23:13 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/23 17:12:55 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	move_top(t_all *all, int posic, int mv)
{
	while (posic > 0)
	{
		if (posic >= all->qtt_a / 2)
		{
			r_r_a(all);
			mv++;
			posic++;
			if (posic >= all->qtt_a)
				posic = 0;
		}
		else
		{
			if (posic == 1)
				s_a(all);
			else
			{
				r_a(all);
				mv--;
			}
			posic--;
		}
	}
	push_b(all);
	return (mv - 1);
}

void	find_first(t_all *all)
{
	int	i;

	i = 0;
	all->first_a = 0;
	while (i < all->qtt_a)
	{
		if (all->vector_a[all->first_a] > all->vector_a[i])
			all->first_a = i;
		i++;
	}
	move_top(all, all->first_a, 0);
}

int	verify_a(t_all *all)
{
	int	i;

	i = 0;
	while (i < all->qtt_a - 1)
	{
		if (all->vector_a[i + 1] < all->vector_a[i])
			return (1);
		i++;
	}
	return (0);
}
