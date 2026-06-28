#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

extern size_t ft_strlen(const char *s);
extern char* ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);

int main(int ac, char** av) {
	if (ac != 2)
		return (1);

	/* ft_strlen */
	size_t size = ft_strlen(av[1]);
	size_t r_size = strlen(av[1]);
	printf("Size: %ld\nRSize: %ld\n", size, r_size);
	/* end */

	/* ft_strcpy */
	const char src[] = "Hello";
	const char r_src[] = "Hello";
	char dst[50];
	char r_dst[50];

	ft_strcpy(dst, src);
	strcpy(r_dst, r_src);
	printf("Copy: %s\nRCopy: %s\n", dst, r_dst);
	/* end */

	const char* a = "hello";
	const char* b = "helloworld";
	const char* c = "hello";

	printf("compare\n");
	printf("a | b %d\n", ft_strcmp(a, b));
	printf("b | a %d\n", ft_strcmp(b, a));
	printf("a | c %d\n", ft_strcmp(a, c));
	printf("r_compare\n");
	printf("a | b %d\n", strcmp(a, b));
	printf("b | a %d\n", strcmp(b, a));
	printf("a | c %d\n", strcmp(a, c));
	return (0);
}	
