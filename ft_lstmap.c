/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:36:40 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/31 19:44:13 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *head;
    t_list *current;
    t_list *new_node;

    if (!lst || !f || !del)
        return (NULL);
    
    head = ft_lstnew(f(lst->content));
    if (!head)
        return (NULL);
    
    current = head;
    while (lst->next)
    {
        lst = lst->next;
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            ft_lstclear(&head, del);  // Clear the entire list and free content if allocation fails
            return (NULL);
        }
        current->next = new_node;
        current = current->next;
    }
    return (head);
}