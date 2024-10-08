#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	tester_strlcat(char *dst1, char *dst2, const char * src, size_t dstsize)
{
	int	expected = strlcat(dst1, src, dstsize);
	int	result = ft_strlcat(dst2, src, dstsize);

	if(result != expected || strcmp(dst1, dst2) != 0)
	{
		printf("ft_strlcat failed for src: \"%s\", size of buffer: %zu. | Expected return: %d |Result return: %d | Expected dst: \"%s\" | Result dst: \"%s\"\n", src, dstsize, expected, result, dst1, dst2);
		return (1);
	}
	return (0);
}

void	manual_copy_strlcat(char *dst, const char *src)
{
	size_t i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int	test_ft_strlcat()
{
	int	failures = 0;
	char		dst1[50]; //classical test with dest1, test with the normal dstize >= dstlen
	char		dst2[50];
	const char	src1[] = " World";
	const char	src2[] = "";
	const char	src3[] = "This is a super long string to test the function strlcat";
	const char	src4[] = " @#!_~";

	//normal case with a large enough buffer
	manual_copy_strlcat(dst1, "Hello");
	manual_copy_strlcat(dst2, "Hello");
	failures += tester_strlcat(dst1, dst2, src1, 15);
	
	//case where the detsize is 0
	manual_copy_strlcat(dst1, "Hello");
	manual_copy_strlcat(dst2, "Hello");
	failures += tester_strlcat(dst1, dst2, src1, 0);//no appending should occur, we just return the size of src 
	
	//ici on teste avec une string vide dest
	manual_copy_strlcat(dst1, "");
	manual_copy_strlcat(dst2, "");
	failures += tester_strlcat(dst1, dst2, src1, 7);

	//ici on teste avec une string vide src 2
	manual_copy_strlcat(dst1, "Hello");
	manual_copy_strlcat(dst2, "Hello");
	failures += tester_strlcat(dst1, dst2, src2, 7);

	//teste pour src tres long, cer qui veut dire que src va etre tronquee (treuncated)
	manual_copy_strlcat(dst1, "This");
	manual_copy_strlcat(dst2, "This");
	failures += tester_strlcat(dst1, dst2, src3, 10);

	//ici on teste avec une string dest qui est plus grande que le buffer de destination dstsize
	manual_copy_strlcat(dst1, "Hello");
	manual_copy_strlcat(dst2, "Hello");
	failures += tester_strlcat(dst1, dst2, src1, 2);

	//ici on teste avec une string dest qui est plus grande que le buffer de destination dstsize
	manual_copy_strlcat(dst1, "Hello");
	manual_copy_strlcat(dst2, "Hello");
	failures += tester_strlcat(dst1, dst2, src1, 1);

	// Case with special characters
	manual_copy_strlcat(dst1, "Hello");
	manual_copy_strlcat(dst2, "Hello");
	failures += tester_strlcat(dst1, dst2, src4, 10);

	if (failures == 0)
		printf("ft_strlcat: All tests passed.\n");
	else
		printf("ft_strlcat: %d tests failed.\n", failures);

	return (failures);
}