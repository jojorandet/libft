/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 19:40:54 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/12 11:22:34 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_back_copy(unsigned char *dest, unsigned char *src, size_t len)
{
	size_t	i;

	i = len;
	while (i > 0)
	{
		i--;
		dest[i] = src[i];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dest1;
	unsigned char	*src1;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (dest1 == src1 || len == 0)
		return (dest);
	if (dest1 < src1)
		ft_memcpy(dest1, src1, len);
	else
		ft_back_copy(dest1, src1, len);
	return (dest);
}
