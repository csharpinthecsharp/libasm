#include "test.h"
#include "../libasm.h"

void f_strlen_test(void) {
	const char* s0 = "";
	const char* s1 = "Hello dlrow";
	printf("--- REAL STRLEN BEHAVIOR ---\n");
	printf("EMPTY CHAR*: %ld\n", strlen(s0));
	printf("Hello dlrow: %ld\n", strlen(s1));
	printf("--- ASSEMBLY STRLEN BEHAVIOR ---\n");
	printf("EMPTY CHAR*: %ld\n", ft_strlen(s0));
	printf("Hello dlrow: %ld\n", ft_strlen(s1));
}
