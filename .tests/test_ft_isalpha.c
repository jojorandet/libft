#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	tester_isalpha(char c)
{
	int expected = isalpha(c);
	int result = ft_isalpha(c);
	if (result == expected)
		return (0); // in both cases it will return 0 because they both render two trues, or two falses, meaning the tests passed. It should not render 1 because it woudl count as a failre
	if (result && expected)     // if (result != 0 && expected != 0) the same!
		return (0);
	printf("Mismatch between functions: 'isapha' returned %d, 'ft_isalpha' returned %d.\n", expected, result);
	return (1);
}

int main()
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