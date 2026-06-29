#include "test.h"
#include "../libasm.h"

void f_strcmp_test(void) {
	const char* s0 = "Hello";
	const char* s1 = "HelloBonus";
	const char* s2 = "Hello";
	printf("--- REAL STRCMP BEHAVIOR ---\n");
	printf("Hello, HelloBonus: %d\n", strcmp(s0, s1));
	printf("HelloBonus, Hello: %d\n", strcmp(s1, s0));
	printf("Hello, Hello: %d\n", strcmp(s0, s2));
	printf("--- ASSEMBLY STRCMP BEHAVIOR ---\n");
	printf("Hello, HelloBonus: %d\n", ft_strcmp(s0, s1));
	printf("HelloBonus, Hello: %d\n", ft_strcmp(s1, s0));
	printf("Hello, Hello: %d\n", ft_strcmp(s0, s2));
}
