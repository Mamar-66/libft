/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:23:24 by omfelk            #+#    #+#             */
/*   Updated: 2023/10/17 18:43:37 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
	{
		while (*lst)
		{
			if (!(*lst))
			{
				(*lst)->next = new;
				new->next = NULL;
				break ;
			}
			(*lst) = (*lst)->next;
		}
	}
}
