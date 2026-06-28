#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
extern size_t ft_strlen(const char *s);
extern char* ft_strcpy(char *dest, const char *src);

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
	return (0);
}	
