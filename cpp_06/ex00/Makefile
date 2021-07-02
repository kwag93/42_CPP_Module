# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/02 10:41:23 by bkwag             #+#    #+#              #
#    Updated: 2021/07/02 14:49:58 by bkwag            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp scalar.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= scalar

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

test:			$(NAME)
				./scalar 0
				./scalar 42
				./scalar 42.
				./scalar 42.f
				./scalar nan
				./scalar nanf
				./scalar inf
				./scalar inff
				./scalar +inf
				./scalar +inff
				./scalar -inf
				./scalar -inff
				./scalar 2147483647
				./scalar 2147483648
				./scalar -2147483648
				./scalar -2147483649
				./scalar 2147483647.f
				./scalar 2147483648.f
				./scalar -2147483648.f
				./scalar -2147483649.f
				./scalar 2147483647.
				./scalar 2147483648.
				./scalar -2147483648.
				./scalar -2147483649.
				./scalar a
				./scalar B
				./scalar "~"
				./scalar 126
				./scalar test
				./scalar 58
				./scalar 101
				./scalar 457846
				./scalar 12544.545f
				./scalar 54178652.41784187
				./scalar 0e0
				./scalar 0e+0
				./scalar 0e-0
				./scalar 0.5e-0
				./scalar 454874.5e-0
				./scalar 454874.5e-21
				./scalar 454874.5e+21
				./scalar 3.40282e+38
				./scalar 3.5e+38
				./scalar 1.17549e-38
				./scalar 1.2e-38
				./scalar -1.17549e38
				./scalar -1.2e38
				./scalar 0e0f
				./scalar 0e+0f
				./scalar 0e-0f
				./scalar 0.5e-0f
				./scalar 454874.5e-0f
				./scalar 454874.5e-21f
				./scalar 454874.5e+21f
				./scalar 3.40282e+38f
				./scalar 3.5e+38f
				./scalar 1.17549e-38f
				./scalar 1.2e-38f
				./scalar -1.17549e38f
				./scalar -1.2e38f

.PHONY:			all clean fclean re
