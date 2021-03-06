/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:18:03 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/23 19:27:43 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bye(t_all *all)
{
	int	i;

	i = 0;
	free(all->vector_a);
	free(all->vector_o);
	if (all->vector_b)
		free(all->vector_b);
	exit(0);
}
