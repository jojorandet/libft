/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jonas.voisard@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:05:54 by jvoisard          #+#    #+#             */
/*   Updated: 2024/10/14 20:41:18 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strncpy(char *dst, char *src, size_t n)
{
	char	*cursor;

	if (!dst || !src)
		return;
	cursor = dst;
	while (*src && n--)
		*cursor++ = *src++;
	*cursor = '\0';
}

/*int main()
{
	char	*src1 = "Le temps est bon";
	char	*src2 = "short";
	char	*src3 = "";
	
	
	char	dest1[50];
	char	dest2[50];
	char	dest3[50];

	ft_strncpy(dest1, src1, 9);
	printf("%s", dest1);

	return (0);
}*/