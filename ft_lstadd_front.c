/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:59:40 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/29 11:40:22 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return (NULL);
	new -> next = *lst;
	*lst = new;
}



//lst isthe address of a pointer to the first link of a list
//new The address of a pointer to the node to be added to the list.