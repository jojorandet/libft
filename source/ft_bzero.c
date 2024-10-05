/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 22:18:05 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/04 23:26:09 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*testpointer;
	size_t	i;

	testpointer = s;
	i = -1;
	while (++i < n)
		testpointer[i] = 0;
}

/*int	main()
{
	char	str[] = "abcdefghij";
	
	ft_bzero(str, 5);
	printf("%s\n", str);

	return (0);
}*/