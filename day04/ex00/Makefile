NAME = animal

CC = clang++
MAKE = make --no-print-directory

CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

HEADERS = \
		./Animal.hpp \
		./Cat.hpp \
		./Dog.hpp \

SRCS = \
		./main.cpp \
		./Animal.cpp \
		./Cat.cpp \
		./Dog.cpp \

OBJS = $(SRCS:%.cpp=%.o)

%.o: %.cpp Makefile $(HEADERS)
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean
		$(MAKE) all

.PHONY: all clean fclean re