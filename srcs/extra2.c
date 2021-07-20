/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:23:13 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/19 18:29:53 by cpereira         ###   ########.fr       */
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

	while (i < all->qtt_a)
	{
		if (all->vector_a[all->first_a] > all->vector_a[i])
		{
			//printf("comp1 = %d > = %d\n",all->vector_a[all->first_a],all->vector_a[i]);
			all->first_a = i;
		}
		i++;
	}
	if (all->first_a == 0)
		i = 1;
	else
		i = 0;
	all->second_a = 0;
	while (i <= all->qtt_a - 1)
	{
		//printf("comp2 = %d(%d) > = %d\n",all->vector_a[all->second_a],all->second_a,all->vector_a[i]);
		if (all->vector_a[all->second_a] > all->vector_a[i] && i != all->first_a)
		{
			all->second_a = i;
		//	printf("escolhido = %d > = %d\n",all->vector_a[all->second_a],all->vector_a[i]);
		}
		if (all->first_a == all->second_a)
		{
			i = -1;
			all->second_a++;
		}
		i++;
	}
	//printf("primeiro %d (%d), segundo %d(%d) - qtta = %d/%d\n",all->vector_a[all->first_a],all->first_a,all->vector_a[all->second_a],all->second_a,all->qtt_a,all->qtt_t);
	/*if (all->vector_a[all->second_a] < -500)
	{
		print_a(all);
		exit(0);
	}*/
	find_diff(all);
}

void	find_first(t_all *all)
{
	int	i;

	i = 0;
	all->first_a = 0;
	while (i < all->qtt_a)
	{
		//printf("comp %d - %d\n",all->vector_a[all->first_a] , all->vector_a[i]);
		if (all->vector_a[all->first_a] > all->vector_a[i])
			all->first_a = i;
		i++;
	}
	//printf("move %d (%d)\n",all->first_a,all->vector_a[all->first_a]);
	//move_top(all, all->first_a, 0);
	//print_a(all);
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
	//printf("alinhado\n");
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
