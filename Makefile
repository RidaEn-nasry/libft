# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 19:29:45 by ren-nasr          #+#    #+#              #
#    Updated: 2021/11/15 21:29:55 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Name
NAME = libft.a

# Source Files

SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_lstdelone.c \
		ft_lstnew.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_calloc.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_split.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_strlcpy.c \



NAME = libft.a


BONUS = ft_lstadd_back.c ft_lstadd_front.c  ft_lstdelone.c\
		ft_lstlast.c  ft_lstnew.c ft_lstsize.c
		

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

all: logo ${NAME}

%.o: %.c 
		${CC} ${CFLAGS}  -c $< -o $@

$(NAME): ${OBJS} 
		ar rcs ${NAME} ${OBJS}

logo:
	@echo " _     _ _    ______ _____"
	@echo "| |   (_) |   |  ___|_   _|"
	@echo "| |    _| |__ | |_    | | "
	@echo "| |   | | '_ \|  _|   | | "
	@echo "| |___| | |_) | |     | | "
	@echo "\_____/_|_.__/\_|     \_/ "
	@echo "\n"

bonus:	${OBJS} ${OBJSBONUS}
		ar rc ${NAME} ${OBJS} ${OBJSBONUS}



clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
