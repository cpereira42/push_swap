/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:23:13 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/15 20:46:20 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_diff(t_all*all)
{
	int	dif_f;
	int	dif_s;
	int	qtt_mv;

	dif_f = all->qtt_a - all->first_a;
	dif_s = all->qtt_a - all->second_a;
	if (dif_f > all->first_a)
		dif_f = all->first_a;
	if (dif_s > all->second_a)
		dif_s = all->second_a;
	if (dif_s > dif_f)
	{
		qtt_mv = move_top(all, all->first_a, 0);
		if (all->qtt_a > 3)
			qtt_mv = move_top(all, all->second_a + qtt_mv, 0);
	}
	else
	{
		qtt_mv = move_top(all, all->second_a, 0);
		if (all->qtt_a > 3)
			qtt_mv = move_top(all, all->first_a + qtt_mv, 0);
	}
}

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

void	find_first_second(t_all *all)
{
	int	i;

	i = 0;
	all->first_a = 0;
	all->second_a = 1;
	while (i < all->qtt_a)
	{
		if (all->vector_a[all->first_a] > all->vector_a[i])
			all->first_a = i;
		i++;
	}
	i = 0;
	while (i < all->qtt_a)
	{
		if (all->vector_a[all->second_a] > all->vector_a[i]
			&& i != all->first_a)
			all->second_a = i;
		if (all->first_a == all->second_a)
		{
			i = -1;
			all->second_a = 0;
		}
		i++;
	}
	find_diff(all);
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

int	verify_b(t_all *all)
{
	int	i;

	i = 0;
	while (i < all->qtt_a - 1)
	{
		if (all->vector_a[i + 1] < all->vector_a[i])
			return (0);
		i++;
	}
	return (1);
}
