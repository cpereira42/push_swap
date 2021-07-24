/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 20:15:49 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/22 20:24:19 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reset_flags(t_all *all, int argc)
{
	all->qtt_com = 0;
	all->qtt_a = 0;
	all->qtt_b = 0;
	all->vector_a = malloc((argc + 1) * sizeof(int *) * 100);
	all->vector_b = malloc((argc + 1) * sizeof(int *) * 100);
	all->vector_o = malloc((argc + 1) * sizeof(int *) * 100);
	all->qtt_t = argc - 1;
	ft_bzero(all->vector_a, argc);
	ft_bzero(all->vector_b, argc);
}

int	verify_args(t_all *all, int argc, char **argv)
{
	int		j;
	int		i;
	long	num;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < (int)ft_strlen(argv[i]))
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][0] != '-')
				return (1);
			j++;
		}
		if (argv[i][0] == '-')
			num = ft_atoi(&argv[i][1]) * -1;
		else
			num = ft_atoi(&argv[i][0]);
		if (checker_num(all, num))
			return (1);
		i++;
	}
	return (0);
}
