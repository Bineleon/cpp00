# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nelbi <neleon@student.42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/20 11:24:02 by nelbi             #+#    #+#              #
#    Updated: 2025/03/24 18:01:20 by nelbi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESET				= \e[0m\033[0m
GREEN				= \033[0;32m\e[1m

NAME 				= phonebook
CC					= c++
FLAGS				= -Wall -Werror -Wextra -std=c++98

SRCS				= Contact.cpp PhoneBook.cpp main.cpp

RM					= rm -rf
OBJS				= ${SRCS:.cpp=.o}

${NAME}: ${OBJS}
	@${CC} ${FLAGS} ${OBJS} -o ${NAME}
	@echo "${GREEN}ex01		: DONE!${RESET}"

all: ${NAME}

clean:
	@${RM} ${OBJS}
	@echo "${GREEN}Clean		: DONE!${RESET}"

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
