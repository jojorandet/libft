#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	tester_strlcpy(char *dst1, char *dst2, const char * src, size_t dstsize)
{
	int	expected = strlcpy(dst1, src, dstsize);
	int	result = ft_strlcpy(dst2, src, dstsize);

	if(result != expected || strcmp(dst1, dst2) != 0)
	{
		printf("ft_strlcpy failed for src: \"%s\", size of buffer: %zu. | Expected return: %d |Result return: %d | Expected dst: \"%s\" | Result dst: \"%s\"\n", src, dstsize, expected, result, dst1, dst2);
		return (1);
	}
	return (0);
}

int	test_ft_strlcpy()
{
	int	failures = 0;
	char		dst1[100];
	char		dst2[100];
	const char	src[] = "Hello";
	const char	src2[] = "";
	const char	src3[] = "This is a super long string to test the function strlcpy";

	//case where the detsize is 0
	ft_bzero(dst1, sizeof(dst1));
	ft_bzero(dst2, sizeof(dst2));
	failures += tester_strlcpy(dst1, dst2, src, 0);

	//ici on teste avec une string vide 
	ft_bzero(dst1, sizeof(dst1));
	ft_bzero(dst2, sizeof(dst2));
	failures += tester_strlcpy(dst1, dst2, src2, 6);

	//ici on teste avec une string src qui est plus grande que le buffer de destination. 
	ft_bzero(dst1, sizeof(dst1));
	ft_bzero(dst2, sizeof(dst2));
	failures += tester_strlcpy(dst1, dst2, src3, 10);

		// Case where dstsize is exactly src length + 1
	ft_bzero(dst1, sizeof(dst1));
	ft_bzero(dst2, sizeof(dst2));
	failures += tester_strlcpy(dst1, dst2, src, strlen(src) + 1);

	// Case where dstsize is greater than src length + 1
	ft_bzero(dst1, sizeof(dst1));
	ft_bzero(dst2, sizeof(dst2));
	failures += tester_strlcpy(dst1, dst2, src, 20);

	// Case with special characters
	const char *src4 = "@#!_~";
	ft_bzero(dst1, sizeof(dst1));
	ft_bzero(dst2, sizeof(dst2));
	failures += tester_strlcpy(dst1, dst2, src4, 10);

	if (failures == 0)
		printf("ft_strlcpy: All tests passed.\n");
	else
		printf("ft_strlcpy: %d tests failed.\n", failures);

	return (failures);
}