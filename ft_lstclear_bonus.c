/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:37:17 by jrandet           #+#    #+#             */
/*   Updated: 2024/11/02 12:07:00 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	clearnext(t_list *lst, void (*del)(void *))
{
	if (lst->next)
		clearnext(lst->next, del);
	ft_lstdelone(lst, del);
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!(*lst))
		return ;
	clearnext((*lst), del);
	(*lst) = NULL;
}
