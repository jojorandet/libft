#include "libft.h"
#include <stdio.h>
#include <string.h>

int tester_strncmp(const char * s1, const char * s2, size_t n)
{
	int	expected = strncmp(s1, s2, n);
	int	result = ft_strncmp(s1, s2, n);

	if(expected == result)
		return (0);
	if (expected > 0 && result > 0)
		return (0);
	if (expected < 0 && result < 0)
		return (0);
	printf("ft_strncmp failed for strings %s and %s, up to %zu characters\nExpected: %d\nResult: %d\n", s1, s2, n, expected, result);
	return (1);
}

int test_ft_strncmp()
{
	int	failures = 0;
	char	s1[50];
	char	s2[50];

	strcpy(s1, "Hello World");
	strcpy(s2, "Hello World");
	failures += tester_strncmp(s1, s2, 11);

	strcpy(s1, "Hella World");
	strcpy(s2, "Hello World");
	failures += tester_strncmp(s1, s2, 11);

	strcpy(s1, "Hel");
	strcpy(s2, "Hello World");
	failures += tester_strncmp(s1, s2, 11);

	strcpy(s1, "");
	strcpy(s2, "Hello World");
	failures += tester_strncmp(s1, s2, 11);

	strcpy(s1, "Hello World");
	strcpy(s2, "");
	failures += tester_strncmp(s1, s2, 11);

	strcpy(s1, "");
	strcpy(s2, "");
	failures += tester_strncmp(s1, s2, 11);

	strcpy(s1, "Hello World");
	strcpy(s2, "Hello World");
	failures += tester_strncmp(s1, s2, 1);

	strcpy(s1, "Hello World");
	strcpy(s2, "Hello World");
	failures += tester_strncmp(s1, s2, 50);

	if (failures == 0)
		printf("ft_strncmp: All tests passed.\n");
	else
		printf("ft_strlen: %d tests failed.\n", failures);
	
	return (failures);
}