#include "test.h"
#include "../libasm.h"

int main(void) {
	int i = 4;
	while (i >= 0) {
		system("clear");
		switch (i) {
			case 4:
				printf("LIBASM STRLEN TEST:\n\n");
				f_strlen_test();
				printf("\nPress ENTER to go next\n");
				break;
			case 3:
				printf("LIBASM STRCMP TEST:\n\n");
				f_strcmp_test();
				printf("\nPress ENTER to go next\n");
				break;
			case 2:
				printf("LIBASM STRCPY TEST:\n\n");
				f_strcpy_test();
				printf("\nPress ENTER to go next\n");
				break;
			case 1:
				printf("LIBASM WRITE TEST:\n\n");
				f_write_test();
				printf("\nPress ENTER to go next\n");
				break;
			default:
				printf("LIBASM EXIT\n");
				printf("\nPress ENTER to exit\n");
				break;
		}
		while (1) {
			char buf;
			read(STDIN_FILENO, &buf, 1);
			if (buf == '\n' && i != 0)
				break;
			else if (buf == '\n' && i == 0)
				return (0);
		}
		i--;
	}
	return (0);
}	
