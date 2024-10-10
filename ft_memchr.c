/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:08:45 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/10 13:22:53 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*testpointer;

	testpointer = (unsigned char *)s;
	while (*testpointer && (*testpointer != (unsigned char)c))
		testpointer++;
	if (*testpointer == (unsigned char)c)
		return (testpointer);
	else
		return (NULL);
}