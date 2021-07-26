NAME = amateria

CC = clang++
MAKE = make --no-print-directory

CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

HEADERS = \
		./AMateria.hpp \
		./Cure.hpp \
		./Ice.hpp \
		./Character.hpp \

SRCS = \
		./main.cpp \
		./AMateria.cpp \
		./Cure.cpp \
		./Ice.cpp \
		./Character.cpp \

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
