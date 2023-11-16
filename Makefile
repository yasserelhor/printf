NAME := libftprintf.a
CFILES := ft_printf.c ft_printc.c ft_printd.c ft_printp.c \
	ft_printu.c ft_printh.c ft_printH.c ft_printperc.c \
	ft_prints.c ft_putchar.c
OFILES := ${CFILES:.c=.o}
CC := cc
CFLAGS := -Wall -Wextra -Werror
AR := ar rcs
RM := rm -f

all: ${NAME}

${NAME}: ${OFILES}
	${AR} ${NAME} ${OFILES}

clean:
	${RM} ${OFILES}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
