/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:46:58 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/16 20:56:41 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	size_num(int num)
{
	int	mult;
	int	ret;

	mult = 1;
	ret = 0;
	while (num / mult > 0)
	{
		mult *= 10;
		ret ++;
	}
	return (ret);
}

int	checker_num(t_all *all, int num)
{
	int	i;

	i = 0;
	if (num > 2147483647 || num < -2147483648)
		return (1);
	while (i < all->qtt_a)
	{
		if (all->vector_a[i] == num)
			return (1);
		i++;
	}
	all->vector_a[all->qtt_a] = num;
	all->qtt_a++;
	return (0);
}
