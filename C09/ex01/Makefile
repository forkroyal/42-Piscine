# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/09 16:40:48 by fsitter           #+#    #+#              #
#    Updated: 2025/09/10 12:07:09 by fsitter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#SOURCE = srcs/ft_putchar.c srcs/ft_swap srcs/ft_putstr.c srcs/ft_strlen srcs/ft_strcmp
SOURCE = $(wildcard ./srcs/*.c)

HEADER = includes

CFLAGS += -Wall -Wextra -Werror

OBJECTS = $(SOURCE:.c=.o)

CC = cc

RM = rm -f

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}: 	${OBJECTS}
			ar rcs $(NAME): ${OBJECTS}

clean:	${RM} ${OBJECTS}
fclean:	clean
		${RM} ${NAME}
re:		fclean all
all:	${NAME}
make:	make all

	