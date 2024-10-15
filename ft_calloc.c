/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:39:34 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/15 18:27:09 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	size_t	memory_needed;

	memory_needed = count * size;
	pointer = malloc(memory_needed);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, memory_needed);
	return (pointer);
}
