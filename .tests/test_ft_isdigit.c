#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	tester_isdigit(char c)
{
	int expected = isdigit(c);
	int result = ft_isdigit(c);

	if (result != expected)
		printf("tester_isdigit failed for argument: %c | Expected: %d | Result: %d\n", c, expected, result);
}

void	test_ft_isdigit()
{
	tester_isdigit('9');
	tester_isdigit('0');
	tester_isdigit('2');
	tester_isdigit('A');
	tester_isdigit('B');
	tester_isdigit('5');
	tester_isdigit('4');
}