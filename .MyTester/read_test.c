#include "test.h"
#include "../libasm.h"

void f_read_test (void) {
	int fd = open(".readtext.txt", O_RDONLY);
	char b;
	size_t r;
	if (fd == -1) {
		printf("Failed to open .readtext.txt\n");
		return;
	}
	printf("--- REAL READ BEHAVIOR ---\n");
	while ((r = read(fd, &b, 1)) > 0)
		write(STDOUT_FILENO, &b, 1);
	read(999, &b, 1);
	printf("testing error (fd): %s\n", strerror(errno)); 

	close(fd);
	fd = open(".readtext.txt", O_RDONLY);
	printf("--- ASSEMBLY READ BEHAVIOR ---\n");
	while ((r = ft_read(fd, &b, 1)) > 0)
		ft_write(STDOUT_FILENO, &b, 1);
	
	ft_read(999, &b, 1);
	printf("testing error (fd): %s\n", strerror(errno)); 
}
