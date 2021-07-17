/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:57:03 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/16 17:52:05 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_f(t_all *all)
{
	int	i;

	i = 0;
	while (i < all->qtt_com)
	{
		printf ("%s\n", all->com[i]);
		i++;
	}
	bye(all);
}

void	print_a(t_all *all)
{
	int	i;

	i = 0;
	printf("Vector A\n");
	while (i < all->qtt_a)
	{
		printf("%d - %d\n", i, all->vector_a[i]);
		i++;
	}
}
