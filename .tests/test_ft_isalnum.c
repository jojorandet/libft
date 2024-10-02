#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	tester_isalnum(char c)
{
	int	result = ft_isalnum(c);
	int	expected = isalnum(c);

	if (result != expected)
		printf("tester_isalnum failed for argument: %c | Expected: %d | Result: %d\n", c, expected, result);
}

void test_isalnum()
{
	tester_isalnum('A');
	tester_isalnum('b');
	tester_isalnum('9');
	tester_isalnum('0');
	tester_isalnum(']');
	tester_isalnum('.');
	tester_isalnum('/');
	tester_isalnum('h');
}
