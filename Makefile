NAME = libftprintf.a

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

AR = ar -rc

SRC = ft_print.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_putunsigned.c

OBJ = $(SRC:.c=.o)

RM = rm -f

.PHONY: clean fclean re all

all: ${NAME}

${NAME}: ${OBJ}
		$(AR) ${NAME} ${OBJ}

clean:
		$(RM) ${OBJ}

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re