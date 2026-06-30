#include "test.h"
#include "../libasm.h"

void f_strdup_test(void) {
	const char* src = "DupMeIfYouCan";
	char* dest0 = NULL;
	char* dest1 = NULL;
	dest0 = strdup(src);
	dest1 = ft_strdup(src);
	printf("--- REAL STRDUP BEHAVIOR ---");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest0);
	printf("--- ASSEMBLY STRDUP BEHAVIOR ---");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest1);
}
