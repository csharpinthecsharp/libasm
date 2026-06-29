NAME = libasm.a
SRC = ft_strlen.s \
      ft_read.s \
      ft_write.s \
      ft_strdup.s \
      ft_strcmp.s \
      ft_strcpy.s
OBJ = $(SRC:.s=.o)

ASM = nasm
ASMFLAGS = -f elf64

AR = ar
ARFLAGS = rcs

RM = /bin/rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.s
	$(ASM) $(ASMFLAGS) $< -o $@

clean:
	$(RM) $(OBJ) libasm.so

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
