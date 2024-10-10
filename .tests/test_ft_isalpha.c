#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	tester_isalpha(char c)
{
	int expected = isalpha(c);
	int result = ft_isalpha(c);
	if (result == expected)
	{
		printf("Both functions return 0s, test passed. Given char is NOT alpha\n");
		return(0);
	}
	if (result && expected)     // if (result != 0 && expected != 0) the same!
	{
		printf("Both functions return true, test passed. Given char IS alpha\n");
		return(0);
	}
	printf("ft_isalpha failed for argument: '%c' | Expected: %d | Result: %d\n", c, expected, result);
	return (1);
}

int test_ft_isalpha()
{
	int failures = 0;

	failures += tester_isalpha('a');
	failures += tester_isalpha('b');
	failures += tester_isalpha('A');
	failures += tester_isalpha('B');
	failures += tester_isalpha('.');
	failures += tester_isalpha('=');
	failures += tester_isalpha('}');

	// Return the total number of failed tests
	if (failures == 0)
		printf("ft_isalpha: All tests passed.\n");
	else
		printf("ft_isalpha: %d tests failed.\n", failures);

	return (failures);
}

/* TRUTHY and FALSY values :)

	1 = Truthy
	0 = Falsy
	\0 = Falsy
	NULL = Falsy

	example -----------------:

	char	a = '\0';  -------> false
	char	b = 'b'; --------->  true
	char	c = 0; -----------> false
	char	d = '9'; ---------> true

	if (c || d)
		printf("Yes");
	else
		printf("No");






 */