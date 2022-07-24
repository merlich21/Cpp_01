# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merlich <merlich@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 21:05:45 by merlich           #+#    #+#              #
#    Updated: 2022/06/27 23:04:49 by merlich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	replace

SRCS		=	main.cpp ft_replace.cpp ft_check_argc.cpp ft_check_infile.cpp\
				ft_check_outfile.cpp ft_check_is_empty.cpp

OBJS		=	${SRCS:.cpp=.o}

C++			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

%.o:		%.cpp Makefile
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
