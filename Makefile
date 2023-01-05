# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpotthar <mpotthar@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 12:29:47 by mpotthar          #+#    #+#              #
#    Updated: 2023/01/04 12:11:17 by mpotthar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC	= ft_printf.c

OBJS = ${SRC:.c=.o}

SUBDIRS = libft 

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rc
RM = rm -f

all:	${SUBDIRS} ${NAME}

${NAME}: ${OBJS}
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

${OBJS}: ${SRC}
	${CC} ${CFLAGS} -c ${SRC}

${SUBDIRS}: 
	$(MAKE) -C $@

clean:
	${RM} ${OBJS}
	$(MAKE) clean -C libft

fclean: clean
	${RM} ${NAME}
	$(MAKE) fclean -C libft

re: fclean all

.PHONY:			all clean fclean re ${SUBDIRS}