# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nelbi <neleon@student.42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/20 10:02:14 by nelbi             #+#    #+#              #
#    Updated: 2025/03/20 10:24:40 by nelbi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESET				= \e[0m\033[0m
GREEN				= \033[0;32m\e[1m

NAME 				= megaphone
CC					= c++
FLAGS				= -Wall -Werror -Wextra -std=c++98

SRCS				= megaphone.cpp

RM					= rm -rf
OBJS				= ${SRCS:.cpp=.o}

${NAME}: ${OBJS}
	@${CC} ${FLAGS} ${OBJS} -o ${NAME}
	@echo "${GREEN}ex00		: DONE!${RESET}"

all: ${NAME}

clean:
	@${RM} ${OBJS}
	@echo "${GREEN}Clean		: DONE!${RESET}"

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
