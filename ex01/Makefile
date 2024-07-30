NAME = form
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp

OBJ := $(SRC:%.cpp=%.o)

all : $(NAME)

.c.o:
	${CC} ${CXXLAGS} -I. -c $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

#$(OBJ) : $(SRC) $(CXXFLAGS)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
