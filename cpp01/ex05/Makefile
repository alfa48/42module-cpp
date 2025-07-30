SRCS = Harl.cpp main.cpp \

OBJS = $(SRCS:.cpp=.o)
NAME = harl
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