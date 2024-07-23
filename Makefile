SRC = ft_printf.c\
    ft_putchar.c\
    ft_puthex.c\
    ft_putnbr.c\
    ft_putptr.c\
    ft_putstr.c\
    ft_putunsigned.c

OBJ = $(SRC:.c=.o)

CC = gcc
RM = rm 
RMFLAGS = -f
CFLAGS = -Wall -Werror -Wextra

AR = ar -r

INCLUDE = ft_printf.h

NAME = libftprintf.a

all: ${NAME}

${NAME}: ${OBJ} $(INCLUDE)
		$(AR) ${NAME} ${OBJ} $(INCLUDE)
clean:
		$(RM) $(RMFLAGS) ${OBJ}
fclean: clean
		$(RM) $(RMFLAGS) ${NAME}
re: fclean all
.PHONY: all clean fclean re