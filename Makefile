# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 21:58:09 by dlom              #+#    #+#              #
#    Updated: 2023/02/11 21:58:09 by dlom             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_printf.c ft_print_decimal_number.c ft_print_hexadecimal.c \
				ft_print_pointer.c ft_print_unsigned_decimal.c ft_itoa.c \
				ft_putstr.c
OBJS		=	${SRCS:.c=.o}
NAME		=	libftprintf.a
INCS		=	ft_printf.h
LIBC		=	ar rc
RM			=	rm -f
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

all: ${NAME}

%.o: %.c ${INCS}
	${CC} ${CFLAGS} -c ${SRCS}

$(NAME): ${OBJS}
	${LIBC} ${NAME} ${OBJS}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re bonus
