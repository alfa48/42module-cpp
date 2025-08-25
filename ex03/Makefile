SRCS = main.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp AMateria.cpp

HEADER = Character.hpp MateriaSource.hpp Ice.hpp Cure.hpp AMateria.hpp ICharacter.hpp IMateriaSource.hpp

OBJS = $(SRCS:.cpp=.o)
NAME = material
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