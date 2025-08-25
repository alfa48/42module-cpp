SRCS = Animal.cpp Dog.cpp Cat.cpp main.cpp Brain.cpp
HEADER = Animal.hpp Dog.hpp Cat.hpp Brain.hpp
DEPS = $(HEADER:.hpp=.d)

OBJS = $(SRCS:.cpp=.o)
NAME = animal
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(HEADER)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all