SRCS = AAnimal.cpp Dog.cpp Cat.cpp main.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
HEADER = AAnimal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

OBJS = $(SRCS:.cpp=.o)
NAME = aanimal
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