HEADER = ft_printf.h
NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ) $(HEADER)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
