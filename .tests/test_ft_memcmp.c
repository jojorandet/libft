#include "libft.h"
#include <stdio.h>
#include <string.h>

int tester_memcmp(const void *s1, const void *s2, size_t n)
{
	int	expected = memcmp((unsigned char *)s1, (unsigned char *)s2, n);
	int	result = ft_memcmp((unsigned char *)s1, (unsigned char *)s2, n);

	if(expected == result)
		return (0); //this is for my test function its not the truthy or falsy 
	if (expected > 0 && result > 0)
		return (0);
	if (expected < 0 && result < 0)
		return (0);
	printf("ft_memcmp failed for strings %s and %s, up to %zu characters\nExpected: %d\nResult: %d\n", (const char *)s1, (const char *)s2, n, expected, result);
	return (1);
}

int main()
{
	int	failures = 0;
	unsigned char	s1[50];
	unsigned char	s2[50];

	memcpy(s1, "Hello World", 12);
	memcpy(s2, "Hello World", 12);
	failures += tester_memcmp(s1, s2, 11);

	memcpy(s1, "Hella World", 12);
	memcpy(s2, "Hello World", 12);
	failures += tester_memcmp(s1, s2, 11);

	memcpy(s1, "Hel", 4);
	memcpy(s2, "Hello World", 12);
	failures += tester_memcmp(s1, s2, 11);

	memcpy(s1, "", 0);
	memcpy(s2, "Hello World", 12);
	failures += tester_memcmp(s1, s2, 11);

	memcpy(s1, "Hello World", 12);
	memcpy(s2, "", 0);
	failures += tester_memcmp(s1, s2, 11);

	memcpy(s1, "", 0);
	memcpy(s2, "", 0);
	failures += tester_memcmp(s1, s2, 11);

	memcpy(s1, "Hello World", 12);
	memcpy(s2, "Hello World", 12);
	failures += tester_memcmp(s1, s2, 1);

	memcpy(s1, "Hello World", 12);
	memcpy(s2, "Hello World", 12);
	failures += tester_memcmp(s1, s2, 50);

	if (failures == 0)
		printf("ft_memcmp: All tests passed.\n");
	else
		printf("ft_memcmp: %d tests failed.\n", failures);
	
	return (failures);
}