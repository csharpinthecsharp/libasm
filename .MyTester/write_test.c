#include "test.h"
#include "../libasm.h"

void f_write_test(void) {
	const char* str0 = "Hello im writing from write";
	const char* str1 = "Hello im writing from ft_write";
	printf("--- REAL WRITE BEHAVIOR ---\n");
	write(STDOUT_FILENO, str0, strlen(str0));
	write(STDOUT_FILENO, "\n", 1);
	write(999, str0, strlen(str0));
	printf("testing error (fd): %s\n", strerror(errno));
	printf("--- ASSEMBLY WRITE BEHAVIOR ---\n");
	ft_write(STDOUT_FILENO, str1, ft_strlen(str1));
	ft_write(STDOUT_FILENO, "\n", 1);	
	ft_write(999, str1, ft_strlen(str1));
	printf("testing error (fd): %s\n", strerror(errno));
}
