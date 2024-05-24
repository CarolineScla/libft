# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csclavon <csclavon@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 18:06:07 by csclavon          #+#    #+#              #
#    Updated: 2024/05/08 16:05:10 by csclavon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILE =  ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_split.c \
		ft_strtrim.c \
		ft_striteri.c \
		ft_itoa.c \
		ft_strmapi.c \

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

OBJS = ${FILE:.c=.o}

RM = rm -f

LIBC = ar rc

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	@printf "compiling $<          \r"

${NAME}:	${OBJS}
			@echo "\n\033[32mdone!\033[0m"
			@${LIBC} ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

all: ${NAME}

re: fclean all

.PHONY: clean fclean all re
