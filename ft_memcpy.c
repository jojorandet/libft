/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:37:02 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/07 15:57:29 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;
	
	if (!dst && !src)
		return (dst);

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}

/*int main()
{
	char	dst[100];
	char	src[] = "hallo";

	printf("%s", ft_memcpy((void *)dst, (void *)src, 5));
	return (0);
}*/