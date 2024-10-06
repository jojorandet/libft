/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:54:05 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/05 19:51:21 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	unsigned char	*testpointer;
	size_t			i;

	testpointer = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		testpointer[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
