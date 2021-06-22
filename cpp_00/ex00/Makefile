# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 11:02:15 by bkwag             #+#    #+#              #
#    Updated: 2021/06/22 11:10:11 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS	= 	megaphone.cpp \

CFLAG	= 	-Wall -Wextra -Werror
RM		=	rm -rf
OBJS	= $(SRCS:%.cpp=%.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	@clang++ $(CFLAG) $(OBJS) -o $(NAME) > /dev/null

clean	:
	@rm -rf *.o
	@rm -rf $(OBJS)

fclean	: clean
	@rm -rf $(NAME)

re		: fclean all

.PHONY:			all, clean, fclean, re
