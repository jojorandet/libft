#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	tester_isdigit(char c, int expected)
{
	int	result;
	
	result = isdigit(c);	
	if (result != expected)
		printf("tester_isdigit failed for argument: %c | Expected: %d | Result: %d\n", c, expected, result);
}

void	test_ft_isdigit()
{
	tester_isdigit('9', 1);
	tester_isdigit('0', 1);
	tester_isdigit('2', 1);
	tester_isdigit('A', 0);
	tester_isdigit('B', 0);
	tester_isdigit('5', 1);
	tester_isdigit('4', 0);
}