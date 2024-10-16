#include <stdio.h>
#include <ctype.h>

#include "../ft_itoa.c"
	
int main()
{
	int n = -237;

	char *res = ft_itoa(n);
	printf("%s", res);

	return (0);
}