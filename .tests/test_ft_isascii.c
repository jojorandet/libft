#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	tester_isascii(char c)
{
	int	expected = isascii(c);
	int	result = ft_isascii(c);

	if (result != expected)
	{
		printf("ft_isascii failed for argument: '%c' | Expected: %d | Result: %d\n", c, expected, result);
		return (1);
	}
	return (0);
}

int	test_ft_isascii()
{
	int failures = 0;
	
	// Testing digits
	failures = failures + tester_isascii('9');
	failures += tester_isascii('0');
	failures += tester_isascii('5');

	// Testing non-digit characters
	failures += tester_isascii('A');  // Uppercase letter
	failures += tester_isascii('z');  // Lowercase letter
	failures += tester_isascii('-');  // Symbol
	failures += tester_isascii('=');  // Symbol

	// Testing whitespace characters
	failures += tester_isascii(' ');  // Space
	failures += tester_isascii('\t'); // Tab

	// Testing non-printable characters
	failures += tester_isascii('\0'); // Null character
	failures += tester_isascii('\n'); // Newline

	// Testing boundary values
	failures += tester_isascii(47);  // ASCII value before '0'
	failures += tester_isascii(58);  // ASCII value after '9'

		// Return the total number of failed tests
	if (failures == 0)
		printf("ft_isascii: All tests passed.\n");
	else
		printf("ft_isascii: %d tests failed.\n", failures);

	return (failures);
}