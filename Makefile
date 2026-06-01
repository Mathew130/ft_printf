NAME	=	libftprintf.a

SRC	=	ft_printf.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_strlen.c	ft_utoa.c	ft_helpers1.c	ft_helpers2.c	ft_hex.c ft_hex_long.c	ft_itoa.c\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc
CFLAGS	=	-Wall	-Wextra	-Werror

all:	$(NAME)

$(NAME):$(OBJ)
	ar	rcs	$(NAME)	$(OBJ)

%.o: %.c
	$(CC)	 $(CFLAGS)	-c	$< -o $@

clean:
	rm	-f	$(OBJ)
fclean:	clean
	rm	-f	$(NAME)

re: fclean all

.PHONY: all clean fclean re


