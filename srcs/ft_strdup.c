/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 23:47:41 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/23 20:07:29 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	t;
	char	*cpy;
	int		i;

	t = ft_strlen(s1) + 1;
	i = 0;
	cpy = (char *)malloc(sizeof(char) * t);
	if ((cpy))
	{
		while (s1[i] != '\0')
		{
			cpy[i] = s1[i];
			i++;
		}
		cpy[i] = '\0';
		return (cpy);
	}
	else
		return (0);
}
