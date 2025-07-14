SRCS = main.cpp Zombie.cpp zombieHorde.cpp\

OBJS = $(SRCS:.cpp=.o)
NAME = horde
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all