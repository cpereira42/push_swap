/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:18:47 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/16 23:27:14 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_vect	*ft_lstnew2(int num)
{
	t_vect *lista;

	if (!(lista = malloc(sizeof(t_vect))))
		return (0);
	lista->num = num;
	lista->next = NULL;
	return (lista);
}

int		ft_lstsize2(t_vect *lst)
{
	int			i;
	t_vect		*tmp;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	ft_lstadd_back2(t_vect **lst, t_vect *new)
{
	if (!*lst)
		*lst = new;
	else
		ft_lstlast2(*lst)->next = new;
}

t_vect	*ft_lstlast2(t_vect *lst)
{
	t_vect	*tmp;

	tmp = lst;
	if (lst)
		while (tmp->next)
			tmp = tmp->next;
	return (tmp);
}

void	ft_lstadd_front2(t_vect **lst, t_vect *new)
{
	new->next = *lst;
	*lst = new;
}


	//return (0);
	// Fazer tratamento de erros e remover os prints
	// testes de lista
	t_vect *list;



