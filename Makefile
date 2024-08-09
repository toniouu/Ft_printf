NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_char.c ft_printf_decimal.c ft_printf_hex_lower.c ft_printf_hex_upper.c ft_printf_integer.c ft_printf_pointer.c ft_printf_string.c ft_printf_unsigned.c ft_search_format.c ft_putchar.c ft_putstr.c ft_putnbr.c \

OBJS = ${SRCS:.c=.o}

CC = cc

FLAGS = -Wall -Wextra -Werror

INCS = include/ft_printf.h


LIBC = ar -rcs

RM = rm -f

.c.o:
	@${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
	@${LIBC} ${NAME} ${OBJS}

all: ${NAME}

fclean: clean
	@${RM} ${NAME}

clean:
	@${RM} ${OBJS}

re: fclean all

.PHONY: all fclean clean re .c.o
