/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:37:02 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/05 17:05:53 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;
	
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