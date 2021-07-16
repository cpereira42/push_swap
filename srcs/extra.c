/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:18:03 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/15 18:22:43 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	org_a(t_all *all)
{
	int	i;

	i = 0;
	while (i < all->qtt_t - 1)
	{
		all->vector_a[all->qtt_t - i - 1] = all->vector_a[all->qtt_a - i - 1];
		i++;
	}
}

void	kill_a(t_all *all)
{
	int	aux;
	int	i;

	i = 0;
	aux = all->vector_a[i];
	while (i < all->qtt_a)
	{
		all->vector_a[i] = all->vector_a[i + 1];
		i++;
	}
	all->vector_a[i - 1] = aux;
}

void	bye (t_all *all)
{
	free(all->vector_a);
	if (all->vector_b)
		free(all->vector_b);
	exit(0);
}

void	push_b(t_all *all)
{
	all->vector_b[all->qtt_b] = all->vector_a[0];
	all->com[all->qtt_com] = ft_strdup("pb");
	all->qtt_com++;
	kill_a(all);
	all->qtt_a--;
	all->qtt_b++;
}

void	push_a(t_all *all)
{
	int	aux;

	all->vector_a[all->qtt_b] = all->vector_b[all->qtt_b];
	all->com[all->qtt_com] = ft_strdup("pa");
	all->qtt_com++;
	if (all->vector_a[all->qtt_b] > all->vector_a[all->qtt_b + 1])
	{
		aux = all->vector_a[all->qtt_b];
		all->vector_a[all->qtt_b] = all->vector_a[all->qtt_b + 1];
		all->vector_a[all->qtt_b + 1] = aux;
		all->com[all->qtt_com] = ft_strdup("sa");
		all->qtt_com++;
	}
	all->qtt_a++;
	all->qtt_b--;
}
