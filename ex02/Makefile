NAME		=	FragTrap
CXX			=	clang++ $(CXXFLAGS) -std=c++98 -pedantic
42FLAGS		=	-Wall -Werror -Wextra
CXXFLAGS 	=	$(42FLAGS)
LDFLAGS		=	-fsanitize=address
SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX) $(SRCS) -o $(NAME)

all:			$(NAME)

re:				fclean all

clean:			
				rm -f *.o

fclean:			clean
				rm -f $(NAME)

.phony:			all re clean fclean
				
