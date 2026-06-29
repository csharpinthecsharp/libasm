#include "test.h"
#include "../libasm.h"

void f_strcpy_test(void) {
	const char src[] = "Copy me if you can";
	char dest0[50];
	dest0[0] = '\0';
	char dest1[50];
	dest1[0] = '\0';
	printf("--- REAL STRCPY BEHAVIOR ---\n");
	printf("src: %s\n", src);
	printf("before -> dest:%s\n", dest0);
	strcpy(dest0, src);
	printf("after -> dest: %s\n", dest0);	
	printf("--- ASSEMBLY STRCPY BEHAVIOR ---\n");
	printf("src: %s\n", src);
	printf("before -> dest:%s\n", dest1);
	ft_strcpy(dest1, src);
	printf("after -> dest: %s\n", dest1);
}
