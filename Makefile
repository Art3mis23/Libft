NAME = Libft.a

SOURCES = $(wildcard *.c)
OBJ = $(SRC: .c=.o)

FLAGS = -Wall -Wextra -Werror

.PHONY: clean fclean

$(NAME): $(OBJ)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
