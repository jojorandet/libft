#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	tester_memmove(void *dest1, void *dest2, const void *src, size_t len)
{
	unsigned char *expected = (unsigned char *)memmove(dest1, src, len);
	unsigned char *result = (unsigned char *)ft_memmove(dest2, src, len);
	size_t	i;

	i = 0;
	while(i < len)
	{
		if(expected[i] != result[i])
		{
			printf("ft_memmove failed at byte %zu for len = %zu\n", i, len);
			printf("Expected: %c, Got: %c\n", expected[i], result[i]);
			return (1);
		}
		i++;
	}
	return (0);	
}

void	reinitialize_src2(char *src2)
{
	src2[0] = '1';
	src2[1] = '2';
	src2[2] = '3';
	src2[3] = '4';
	src2[4] = '5';
	src2[5] = '6';
	src2[6] = '7';
	src2[7] = '8';
	src2[8] = '9';
	src2[9] = '\0';
}

int	test_ft_memmove()
{
	int		failures;
	char	dest1[100];
	char	dest2[100];
	char	src[] = "hallo";
	char	src2[] = "123456789";

	failures =  0;

	//arrays do not overlap
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	failures += tester_memmove(dest1, dest2, src, 5);

	//backward copy
	//there is an overlap, the dest is after the source meaning backward copy
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	failures += tester_memmove(src2 + 4, src2 + 4, src2, 6);
	reinitialize_src2(src2);

	//forward copy
	//there is an overlap, the dest is before the source, no risk of overwriting, forward copy 
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	failures += tester_memmove(src2, src2, src2 + 4, 6);
	reinitialize_src2(src2);
	
	//self copy
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	failures += tester_memmove(src2, src2, src2, 6);

	//zero-length copy
	//nothing should happen here
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	char	src3[] = "";
	failures += tester_memmove(dest1, dest2, src3, 0);


	//copying a very small amount (1)
	reinitialize_src2(src2);
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	failures += tester_memmove(dest1, dest2, src2, 1);

	//different overlaping lengths 
	/*reinitialize_src2(src2);
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	failures += tester_memmove(src2 + 1, src2 + 2, src2, 5);*/

	//only a small overlap.
	reinitialize_src2(src2);
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	failures += tester_memmove(src2 + 1, src2 + 1, src2, 5);

	if (failures == 0)
	{
		printf("ft_memmove: All tests passed.\n");
	}
	else
	{
		printf("ft_memmove: %d tests failed.\n", failures);
	}
	return (failures);
}