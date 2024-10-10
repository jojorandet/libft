#include "libft.h"
#include <stdio.h>
#include <string.h>

int tester_strrchr(const char *s1, const char *s2, int c)
{
	char *expected = strrchr((char *)s1, (char)c);
	char *result = ft_strrchr((char *)s2, (char)c);

	if ((expected == NULL && result != NULL) || (expected != NULL && result == NULL) || 
		(expected != NULL && result != NULL && strcmp(expected, result) != 0))
	{
		printf("ft_strrchr failed for input string \"%s\" and character '%c' to search | ", s1, (char)c);

		if (expected == NULL)
			printf("expected: (NULL) | ");
		else
			printf("expected: \"%s\" | ", expected);

		if (result == NULL)
			printf("result: (NULL)\n");
		else
			printf("result: \"%s\"\n", result); // this basically ends the rest of the printf at the top that is incomplete to the rest of my tests

		return (1);
	}
	return (0);
}

void	manual_copy_strrchr(char *dst, const char *src)
{
	size_t i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int	test_ft_strrchr()
{
	int	failures = 0;
	char	s1[50];
	char	s2[50];
	
	manual_copy_strrchr(s1, "Hello my name is Alice");
	manual_copy_strrchr(s2, "Hello my name is Alice");
	failures += tester_strrchr(s1, s2, 'A');

	manual_copy_strrchr(s1, "Hello my name is Alice");
	manual_copy_strrchr(s2, "Hello my name is Alice");
	failures += tester_strrchr(s1, s2, 'm');

	manual_copy_strrchr(s1, "Hello my name is Alice");
	manual_copy_strrchr(s2, "Hello my name is Alice");
	failures += tester_strrchr(s1, s2, 'J');

	manual_copy_strrchr(s1, "Hello my name is Alice");
	manual_copy_strrchr(s2, "Hello my name is Alice");
	failures += tester_strrchr(s1, s2, '\0');

	manual_copy_strrchr(s1, "");
	manual_copy_strrchr(s2, "");
	failures += tester_strrchr(s1, s2, 'J');

	manual_copy_strrchr(s1, "");
	manual_copy_strrchr(s2, "");
	failures += tester_strrchr(s1, s2, '\0');

	if(failures == 0)
		printf("ft_strrchr: All tests passed.\n");
	else
		printf("ft_strrchr: %d tests failed.\n", failures);

	return (failures);
}
