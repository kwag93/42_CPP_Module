SRCS			= Bureaucrat.cpp Form.cpp Intern.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= coffee_making
TREE			= Bender_shrubbery

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS) $(TREE)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
