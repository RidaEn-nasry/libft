 # **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 19:29:45 by ren-nasr          #+#    #+#              #
#    Updated: 2022/04/28 12:58:09 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# silent mode 
MAKEFLAGS = -s

NAME = libft.a

SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c\
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
		ft_strstr.c \
		exitif.c \
		ft_strtok.c\
		ft_isspace.c\
		ft_realloc.c\
		ft_doubtrim.c\
		ft_isPrime.c\
		ft_doublen.c\
		ft_doubrealloc.c\
		ft_doubfree.c\
		ft_stcount.c\
		ft_sfree.c\
		ft_valid_fname.c\
		ft_ternary.c\
		ft_intternary.c\
		ft_getenv.c\
		ft_doubconcat.c



BONUS = ft_lstadd_back.c ft_lstadd_front.c  ft_lstdelone.c\
		ft_lstlast.c  ft_lstnew.c ft_lstsize.c
		

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror -g

all: logo ${NAME}

%.o: %.c 
		${CC} ${CFLAGS}  -c -g $< -o $@

$(NAME): ${OBJS} 
		ar rcs ${NAME} ${OBJS}


# if silent mode is activated, we don't want to see the following messages
# when we run make
logo:
	# @echo " _     _ _    ______ _____"
	# @echo "| |   (_) |   |  ___|_   _|"
	# @echo "| |    _| |__ | |_    | | "
	# @echo "| |   | | '_ \|  _|   | | "
	# @echo "| |___| | |_) | |     | | "
	# @echo "\_____/_|_.__/\_|     \_/ "
	# @echo "\n"

bonus:	${OBJS} ${OBJSBONUS}
		ar rc ${NAME} ${OBJS} ${OBJSBONUS}



clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all