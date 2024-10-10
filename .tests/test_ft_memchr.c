#include "libft.h"
#include <stdio.h>
#include <string.h>

int	tester_memchr(const void *s1, int c, size_t n)
{
    unsigned char    *expected = (unsigned char *)memchr(s1, (char)c, n);
	unsigned char	*result = (unsigned char *)ft_memchr(s1, (char)c, n);

	if ((expected == NULL && result != NULL) || (expected != NULL && result == NULL) || 
		(expected != NULL && result != NULL && strcmp(expected, result) != 0))
	{
		printf("ft_memchr failed for input string \"%s\" and character '%c' to search | ", s1, (char)c);

		if (expected == NULL)
			printf("expected: (NULL) | ");
		else
			printf("expected: \"%s\" | ", expected);

		if (result == NULL)
			printf("result: (NULL)\n");
		else
			printf("result: \"%s\"\n", result);

		return (1);
	}
	return (0);
}

int test_memchr()
{
    int failures = 0;
    char s1[50];

    strcpy(s1, "Hello my name is Alice");
    failures += tester_memchr(s1, 'A', 20);

    strcpy(s1, "Hello my name is Alice");
    failures += tester_memchr(s1, 'm', 20);

    strcpy(s1, "");
    failures += tester_memchr(s1, 'A', 20);

    strcpy(s1, "Hello my name is Alice");
    failures += tester_memchr(s1, 'A', 1);

    strcpy(s1, "Hello my name is Alice");
    failures += tester_memchr(s1, 'B', 20);

    strcpy(s1, "Hello my name is Alice");
    failures += tester_memchr(s1, '-', 10);

    strcpy(s1, "Hello my name is Alice");
    failures += tester_memchr(s1, '\0', 20);

    if (failures == 0)
        printf("ft_memchr: All tests passed.\n");
    else
        printf("ft_memchr: %d tests failed.\n", failures);

    return (failures);
}