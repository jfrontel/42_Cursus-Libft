# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 15:40:04 by jfrontel          #+#    #+#              #
#    Updated: 2022/09/26 14:00:32 by jfrontel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCR	= ft_atoi.c \
		  ft_bzero.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_strchr.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		 ft_split.c \
		 ft_striteri.c 

SRCR_BONUS	=	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

OBJS	= ${SRCR:.c=.o}

BONUS_OBJS	= ${SRCR_BONUS:.c=.o}

INCLUDE	=	libft.h

CC		= gcc
AR		= ar rcs
RM		= rm -f

CFLAGS	= -Werror -Wall -Wextra -g

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
			${AR} ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${BONUS_OBJS}

fclean:	clean
		${RM} ${NAME}
	
re:		fclean all

bonus: ${BONUS_OBJS}	
			${AR} ${NAME} ${BONUS_OBJS}

.PHONY:		all clean fclean re
