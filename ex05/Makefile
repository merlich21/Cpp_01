# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merlich <merlich@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 23:15:37 by merlich           #+#    #+#              #
#    Updated: 2022/08/06 21:46:59 by merlich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harl

SRCS		=	main.cpp Harl.cpp

HEADER		=	Harl.hpp

OBJS		=	${SRCS:.cpp=.o}

C++			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

%.o:		%.cpp Makefile ${HEADER}
			${C++} ${CPPFLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS} Makefile
			${C++} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
