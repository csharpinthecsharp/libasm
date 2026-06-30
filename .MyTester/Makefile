NAME = tester
CC = cc
CFLAGS = -g
SRC = strlen_test.c \
      strcpy_test.c \
      strcmp_test.c \
      write_test.c \
      read_test.c \
      strdup_test.c \
      main.c

OBJS = $(SRC:.c=.o)
LIBASM = ../libasm.a

all: $(NAME)

$(LIBASM):
	make -C ../

$(NAME): $(LIBASM) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBASM)

clean: 
	rm -f $(OBJS)
	make -C ../ clean

fclean: clean
	rm -f $(NAME)
	make -C ../ fclean

re: fclean all

.PHONY: all clean fclean re
