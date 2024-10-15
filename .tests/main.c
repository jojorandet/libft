#include "libft.h"
#include <stdio.h>

int test_ft_isalpha();
int	test_ft_isdigit();
int	test_ft_isalnum();
int	test_ft_isascii();
int	test_ft_isprint();
int	test_ft_strlen();
int	test_ft_memset();
int	test_ft_memcpy();
int	test_ft_memmove();
int	test_ft_strlcpy();
int	test_ft_strlcat();
int	test_ft_toupper();
int	test_ft_tolower();
int	test_ft_strchr();
int	test_ft_strrchr();
int test_ft_strncmp();
int test_memchr();
int test_ft_memcmp();

int	main(void)
{
	/*test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_memchr();
	test_ft_memcmp();*/

	char const	*s1 = "Hello my name is Josephine Hello";
	char const	*s2 = "";

	char const	*set = "Hello ";

	printf("%s\n", ft_strtrim(s1, set));
	printf("%s\n", ft_strtrim(s2, set));

	return (0);
}
