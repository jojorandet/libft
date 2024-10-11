#include "libft.h"
#include <stdio.h>
#include <string.h>

int tester_strchr(const char *s1, const char *s2, int c)
{
	char *expected = strchr(s1, (char)c);
	char *result = ft_strchr(s2, (char)c);

	if ((expected == NULL && result != NULL) || (expected != NULL && result == NULL) || 
		(expected != NULL && result != NULL && strcmp(expected, result) != 0))
	{
		printf("ft_strchr failed for input string \"%s\" and character '%c' to search | ", s1, (char)c);

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

void	manual_copy_strchr(char *dst, const char *src)
{
	size_t i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int	test_ft_strchr()
{
	int	failures = 0;
	char	s1[50];
	char	s2[50];
	
	manual_copy_strchr(s1, "Hello my name is Alice");
	manual_copy_strchr(s2, "Hello my name is Alice");
	failures += tester_strchr(s1, s2, 'A');

	manual_copy_strchr(s1, "Hello my name is Alice");
	manual_copy_strchr(s2, "Hello my name is Alice");
	failures += tester_strchr(s1, s2, 'm');

	manual_copy_strchr(s1, "Hello my name is Alice");
	manual_copy_strchr(s2, "Hello my name is Alice");
	failures += tester_strchr(s1, s2, 'J');

	manual_copy_strchr(s1, "Hello my name is Alice");
	manual_copy_strchr(s2, "Hello my name is Alice");
	failures += tester_strchr(s1, s2, '\0');

	manual_copy_strchr(s1, "");
	manual_copy_strchr(s2, "");
	failures += tester_strchr(s1, s2, 'J');

	manual_copy_strchr(s1, "");
	manual_copy_strchr(s2, "");
	failures += tester_strchr(s1, s2, '\0');

	if(failures == 0)
	{
		printf("ft_strchr: All tests passed.\n");
	}
	else
	{
		printf("ft_strchr: %d tests failed.\n", failures);
	}
	return (failures);
}