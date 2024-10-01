#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	test(char c, int expected)
{
	int result = ft_isalpha(c);
	if(result != expected)
		printf("argument: %c | expected:  %d | result: %d\n", c, expected, result);
}

int test_ft_isalpha()
{
	test('a', 1);
	test('b', 1);
	test('A', 1);
	test('B', 1);
	test('\n', 1);
	test('.', 0);
	test('=', 0);
	test('}', 0);
	return (0);
}