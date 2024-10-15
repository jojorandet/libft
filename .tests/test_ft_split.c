#include <stdio.h>
#include <ctype.h>

#include "../ft_split.c"

void print_arr(char **arr)
{
	if (!arr)
	{
		printf("(null)");
		return ;
	}
	printf("[");
	while (*arr)
	{
		printf("%s, ", *arr);
		arr++;
	}
	printf("(null)]");
	
}

int	main()
{
	const char	s1[] = "\0aa\0bbb";
	char c = '\0';
	char **result = ft_split(s1, c);

	print_arr(result);

	return (0);
}
