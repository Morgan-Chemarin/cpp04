NAME = world_on_fire
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinc

SRCS = \
    src/main.cpp \
    src/Animal.cpp \
    src/Dog.cpp \
    src/Cat.cpp \
	src/WrongAnimal.cpp \
	src/WrongCat.cpp \
	src/Brain.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp inc/Animal.hpp inc/Dog.hpp inc/Cat.hpp inc/WrongAnimal.hpp inc/WrongCat.hpp inc/Brain.hpp Makefile
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re