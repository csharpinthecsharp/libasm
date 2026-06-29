#include "test.h"
#include "../libasm.h"

void f_strlen_test() {
	const char* s0 = "Hello dlrow";
	printf("--- REAL STRLEN BEHAVIOR ---");
	printf("Hello dlrow: %ld\n", strlen(s0));
}
