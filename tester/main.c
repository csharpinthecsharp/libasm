#include "test.h"
#include "../libasm.h"

void err(void) {
	fprintf(stdout, "./tester [strlen, strcpy, strcmp, strdup, write, read]\n");
	exit(1);
}

int main(int ac, char** av) {
	if (ac != 2)
		err();
	if (!strcmp("strlen", av[1]))
		f_strlen_test();
	else if (!strcmp("strcmp", av[1]))
		f_strcmp_test();
	else if (!strcmp("strcpy", av[1]))
		f_strcpy_test();
	else
		err();
	return (0);
}	
