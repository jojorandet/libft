/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:07:47 by jrandet           #+#    #+#             */
/*   Updated: 2024/11/02 11:38:01 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelfirst(t_list **head)
{
	t_list *temp;
	
	if (*head == NULL)
	{ 
		return ;
	}
	temp = (*head);
	*head = (*head)->next;
	free(temp->content);
	free(temp);
}